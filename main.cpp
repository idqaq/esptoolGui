#include <QApplication>
#include <QPushButton>
#include "layout.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    layout w;
    w.show();
    return QApplication::exec();
}
