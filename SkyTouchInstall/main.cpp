#include "mainwindow.h"
#include <QApplication>
#include "network.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Network network;
    //network.head("http://download2.pcamerica.com/12.9/CRE_Setup_x64.exe");
    MainWindow w;
    w.show();

    return a.exec();
}
