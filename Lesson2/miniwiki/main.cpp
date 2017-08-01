#include "mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QImage>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setStyleSheet("background-color: white");
    w.show();

    return a.exec();
}
