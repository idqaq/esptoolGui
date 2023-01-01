//
// Created by fan on 2022/12/31.
//

#ifndef UNTITLED1_LAYOUT_H
#define UNTITLED1_LAYOUT_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class layout; }
QT_END_NAMESPACE

class layout : public QWidget {
Q_OBJECT

public:
    explicit layout(QWidget *parent = nullptr);

    ~layout() override;

private slots:
    void reload();
    void file();
    void filePath();
    void flashOne();
    void flashAll();

private:
    Ui::layout *ui;
    void cmdProcess(const QString &program, QStringList &args);
};
#endif //UNTITLED1_LAYOUT_H
