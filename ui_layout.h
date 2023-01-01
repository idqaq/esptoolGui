/********************************************************************************
** Form generated from reading UI file 'layout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUT_H
#define UI_LAYOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_layout
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *portBox;
    QPushButton *Reload;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *baudBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *flashSizeBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLineEdit *allBin;
    QPushButton *file;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *oneBin;
    QPushButton *file2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *flash_one;
    QPushButton *flash_all;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *textShow;

    void setupUi(QWidget *layout)
    {
        if (layout->objectName().isEmpty())
            layout->setObjectName(QString::fromUtf8("layout"));
        layout->resize(405, 599);
        verticalLayout_3 = new QVBoxLayout(layout);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layout);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        portBox = new QComboBox(layout);
        portBox->setObjectName(QString::fromUtf8("portBox"));

        horizontalLayout->addWidget(portBox);

        Reload = new QPushButton(layout);
        Reload->setObjectName(QString::fromUtf8("Reload"));

        horizontalLayout->addWidget(Reload);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layout);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        baudBox = new QComboBox(layout);
        baudBox->setObjectName(QString::fromUtf8("baudBox"));

        horizontalLayout_2->addWidget(baudBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layout);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        flashSizeBox = new QComboBox(layout);
        flashSizeBox->addItem(QString());
        flashSizeBox->addItem(QString());
        flashSizeBox->addItem(QString());
        flashSizeBox->addItem(QString());
        flashSizeBox->addItem(QString());
        flashSizeBox->addItem(QString());
        flashSizeBox->addItem(QString());
        flashSizeBox->addItem(QString());
        flashSizeBox->addItem(QString());
        flashSizeBox->setObjectName(QString::fromUtf8("flashSizeBox"));
        flashSizeBox->setModelColumn(0);

        horizontalLayout_3->addWidget(flashSizeBox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layout);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        allBin = new QLineEdit(layout);
        allBin->setObjectName(QString::fromUtf8("allBin"));
        allBin->setEnabled(true);
        allBin->setMinimumSize(QSize(200, 0));
        allBin->setReadOnly(true);

        horizontalLayout_4->addWidget(allBin);

        file = new QPushButton(layout);
        file->setObjectName(QString::fromUtf8("file"));

        horizontalLayout_4->addWidget(file);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layout);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        oneBin = new QLineEdit(layout);
        oneBin->setObjectName(QString::fromUtf8("oneBin"));
        oneBin->setMinimumSize(QSize(200, 0));
        oneBin->setReadOnly(true);

        horizontalLayout_5->addWidget(oneBin);

        file2 = new QPushButton(layout);
        file2->setObjectName(QString::fromUtf8("file2"));

        horizontalLayout_5->addWidget(file2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(36, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        flash_one = new QPushButton(layout);
        flash_one->setObjectName(QString::fromUtf8("flash_one"));

        horizontalLayout_6->addWidget(flash_one);

        flash_all = new QPushButton(layout);
        flash_all->setObjectName(QString::fromUtf8("flash_all"));

        horizontalLayout_6->addWidget(flash_all);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textShow = new QPlainTextEdit(layout);
        textShow->setObjectName(QString::fromUtf8("textShow"));
        textShow->setCenterOnScroll(false);

        verticalLayout_4->addWidget(textShow);


        verticalLayout_3->addLayout(verticalLayout_4);

        QWidget::setTabOrder(portBox, allBin);
        QWidget::setTabOrder(allBin, oneBin);
        QWidget::setTabOrder(oneBin, flashSizeBox);
        QWidget::setTabOrder(flashSizeBox, flash_one);
        QWidget::setTabOrder(flash_one, flash_all);
        QWidget::setTabOrder(flash_all, baudBox);
        QWidget::setTabOrder(baudBox, file);
        QWidget::setTabOrder(file, file2);

        retranslateUi(layout);

        flashSizeBox->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(layout);
    } // setupUi

    void retranslateUi(QWidget *layout)
    {
        layout->setWindowTitle(QCoreApplication::translate("layout", "ESPtool Gui", nullptr));
        label->setText(QCoreApplication::translate("layout", "\344\270\262\345\217\243", nullptr));
        Reload->setText(QCoreApplication::translate("layout", "Reload", nullptr));
        label_2->setText(QCoreApplication::translate("layout", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_3->setText(QCoreApplication::translate("layout", "flash_size", nullptr));
        flashSizeBox->setItemText(0, QCoreApplication::translate("layout", "256KB", nullptr));
        flashSizeBox->setItemText(1, QCoreApplication::translate("layout", "512KB", nullptr));
        flashSizeBox->setItemText(2, QCoreApplication::translate("layout", "1MB", nullptr));
        flashSizeBox->setItemText(3, QCoreApplication::translate("layout", "2MB", nullptr));
        flashSizeBox->setItemText(4, QCoreApplication::translate("layout", "2MB-c1", nullptr));
        flashSizeBox->setItemText(5, QCoreApplication::translate("layout", "4MB", nullptr));
        flashSizeBox->setItemText(6, QCoreApplication::translate("layout", "4MB-c1", nullptr));
        flashSizeBox->setItemText(7, QCoreApplication::translate("layout", "8MB", nullptr));
        flashSizeBox->setItemText(8, QCoreApplication::translate("layout", "16MB", nullptr));

        label_4->setText(QCoreApplication::translate("layout", "\345\233\272\344\273\266\347\233\256\345\275\225", nullptr));
        allBin->setText(QString());
        file->setText(QCoreApplication::translate("layout", "File", nullptr));
        label_5->setText(QCoreApplication::translate("layout", "\345\215\225\345\233\272\344\273\266", nullptr));
        oneBin->setInputMask(QString());
        oneBin->setPlaceholderText(QCoreApplication::translate("layout", "\345\215\225\344\270\252\345\233\272\344\273\266", nullptr));
        file2->setText(QCoreApplication::translate("layout", "File", nullptr));
        flash_one->setText(QCoreApplication::translate("layout", "\345\215\225\346\226\207\344\273\266", nullptr));
        flash_all->setText(QCoreApplication::translate("layout", "\347\233\256\345\275\225\347\203\247\345\275\225", nullptr));
        textShow->setPlainText(QString());
    } // retranslateUi

};

namespace Ui {
    class layout: public Ui_layout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUT_H
