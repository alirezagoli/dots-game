#include "mainwindow.h"
#include <QApplication>
#include"game_size.h"
#include<QDebug>
#include<sstream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game_size s;
    s.exec();
    MainWindow w(0,s.RowSize.toInt(),s.ColSize.toInt());
    w.show();
    return a.exec();
}
