#include "Loggin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Loggin w;
    w.show();
    return a.exec();
}
