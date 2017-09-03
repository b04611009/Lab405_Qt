#include "phone_enter.h"
#include <QApplication>
#include <QMainWindow>
#include <QFileDialog>
#include <QImage>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFrame>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    phone_enter w;
    w.setStyleSheet("background-color: white");
    w.show();
    return a.exec();
}
