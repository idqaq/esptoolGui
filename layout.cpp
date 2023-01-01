//
// Created by fan on 2022/12/31.
//

// You may need to build the project (run Qt uic code generator) to get "ui_layout.h" resolved

#include "layout.h"
#include "ui_layout.h"
#include "QtSerialPort/QSerialPortInfo"
#include "QtSerialPort/QSerialPort"
#include "QDebug"
#include <QFileDialog>
#include <QDir>
#include <QProcess>



layout::layout(QWidget *parent) :
        QWidget(parent), ui(new Ui::layout) {
    ui->setupUi(this);
    // 添加 baud 项目
    ui->baudBox->clear();
    ui->baudBox->addItem(QStringLiteral("1200"), QSerialPort::Baud1200);
    ui->baudBox->addItem(QStringLiteral("2400"), QSerialPort::Baud2400);
    ui->baudBox->addItem(QStringLiteral("4800"), QSerialPort::Baud4800);
    ui->baudBox->addItem(QStringLiteral("9600"), QSerialPort::Baud9600);
    ui->baudBox->addItem(QStringLiteral("19200"), QSerialPort::Baud19200);
    ui->baudBox->addItem(QStringLiteral("38400"), QSerialPort::Baud38400);
    ui->baudBox->addItem(QStringLiteral("57600"), QSerialPort::Baud57600);
    ui->baudBox->addItem(QStringLiteral("115200"), 115200);
    ui->baudBox->setCurrentIndex(7); // Default 115200
    // 初始化 Port 项目
    this->reload();
    // 按钮 事件绑定
    connect(ui->Reload, SIGNAL(clicked()), this, SLOT(reload()));
    connect(ui->file, &QPushButton::clicked, this, &layout::filePath );
    connect(ui->file2,&QPushButton::clicked, this, &layout::file);
    connect(ui->flash_one, SIGNAL(clicked(bool)), this, SLOT(flashOne()));
    connect(ui->flash_all, SIGNAL(clicked(bool)), this, SLOT(flashAll()));
}

layout::~layout() {
    delete ui;
}


void layout::reload() {
    ui->portBox->clear();
//    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
//    {
//        qDebug() << "Name : " << info.portName();
//        qDebug() << "Description : " << info.description();
//        qDebug() << "Manufacturer: " << info.manufacturer();
//        qDebug() << "Serial Number: " << info.serialNumber();
//        qDebug() << "System Location: " << info.systemLocation();
//    }
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        ui->portBox->addItem(info.portName(), info.systemLocation());
    }
}
void layout::file() {
    auto file = QFileDialog::getOpenFileName(this,"MCU固件","~","固件 (*.bin);; 所有文件 (*.*);; );");
    if (!file.isEmpty()){
        qDebug()<<"固件(单)文件路径"<<file;
        ui->oneBin->setText(file);
    }
}
void layout::filePath() {
    auto path = QFileDialog::getExistingDirectory(this, "请选择固件目录", "~" );
    QDir dir(path);
    qDebug() << "固件目录路径：" << path ;
    ui->allBin->setText(path);
    auto binList = dir.entryList(QStringList()<<"*.bin");

}

void layout::cmdProcess(const QString& program, QStringList& args) {
    auto process = new QProcess(this);
    connect(process, &QProcess::started,this,[=](){
        qInfo()<<"&QProcess::started";
    });
    connect(process, &QProcess::readyReadStandardError, this, [=]()
    {
        ui->textShow->insertPlainText(process->readAllStandardError());
    });
    // esptool.py erase_flash
    // process->start("esptool",QStringList()<<"erase_flash");
    // process->waitForFinished(); //等待shell命令执行完成
    process->start(program,args);
    //结果捕获

    QObject::connect(process,&QProcess::readyReadStandardOutput,[=](){
       // qDebug()<<"readyReadStandardOutput:" << process->readAllStandardOutput().data();
       ui->textShow->appendPlainText(process->readAllStandardOutput().data());
       //ui->textShow->setPlainText(process->readAllStandardOutput().data());
    });
    QString  str = process->readAllStandardOutput(); //捕获输出
    qDebug() << str;
}

void layout::flashAll() {
    QStringList args;
    args << "write_flash"
    << "--erase-all"
    << "--baud" << ui->baudBox->currentText()
    << "--port" << ui->portBox->currentData().toString()
    << "0x0" << "boot.bin"
    << "0x01000" << "blank.bin"
    ;
    qInfo()<<args;
//    cmdProcess("esptool.py",args);

}

void layout::flashOne() {
    QStringList args;
    args<< "--baud" << ui->baudBox->currentText()
    << "--port" << ui->portBox->currentData().toString()
    << "write_flash"
    << "--erase-all"
    << "0x00000" << ui->oneBin->text();
    qInfo()<<args;
    cmdProcess("esptool.py",args);
}
