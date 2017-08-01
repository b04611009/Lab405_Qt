#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImage>
#include <QFileDialog>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("miniwiki"));
    QPixmap Image("C:/Users/admin/Desktop/back.jpg");
    ui->BackGround->setPixmap(Image);
    ui->BackGround->setPixmap(Image.scaled(ui->BackGround->width(),ui->BackGround->height(),Qt::KeepAspectRatio));
    QPixmap Image_2("C:/Users/admin/Desktop/all.jpg");
    ui->BackGround_2->setPixmap(Image_2);
    ui->BackGround_2->setPixmap(Image_2.scaled(ui->BackGround_2->width(),ui->BackGround_2->height(),Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QFile Text1("C:/Users/admin/Desktop/teacher.txt");
    Text1.open(QIODevice::ReadOnly);
    QTextStream in (&Text1);
    while(!in.atEnd()){
        QString line = in.readLine();
        ui->textBrowser->setPlainText(in.readAll());
    }
    QPixmap photo_1("C:/Users/admin/Desktop/teacher.jpg");
    ui->picture->setPixmap(photo_1);
    ui->picture->setPixmap(photo_1.scaled(ui->picture->width(),ui->picture->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_2_clicked()
{
    QFile Text2("C:/Users/admin/Desktop/ugly.txt");
    Text2.open(QIODevice::ReadOnly);
    QTextStream in (&Text2);
    while(!in.atEnd()){
        QString line = in.readLine();
        ui->textBrowser->setPlainText(in.readAll());
    }
    QPixmap photo_2("C:/Users/admin/Desktop/ugly.jpg");
    ui->picture->setPixmap(photo_2);
    ui->picture->setPixmap(photo_2.scaled(ui->picture->width(),ui->picture->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_3_clicked()
{
    QFile Text3("C:/Users/admin/Desktop/chuck.txt");
    Text3.open(QIODevice::ReadOnly);
    QTextStream in (&Text3);
    while(!in.atEnd()){
        QString line = in.readLine();
        ui->textBrowser->setPlainText(in.readAll());
    }
    QPixmap photo_3("C:/Users/admin/Desktop/chuck.jpg");
    ui->picture->setPixmap(photo_3);
    ui->picture->setPixmap(photo_3.scaled(ui->picture->width(),ui->picture->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_4_clicked()
{
    QFile Text4("C:/Users/admin/Desktop/hell.txt");
    Text4.open(QIODevice::ReadOnly);
    QTextStream in (&Text4);
    while(!in.atEnd()){
        QString line = in.readLine();
        ui->textBrowser->setPlainText(in.readAll());
    }
    QPixmap photo_4("C:/Users/admin/Desktop/hell.jpg");
    ui->picture->setPixmap(photo_4);
    ui->picture->setPixmap(photo_4.scaled(ui->picture->width(),ui->picture->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_5_clicked()
{
    QFile Text5("C:/Users/admin/Desktop/hehe.txt");
    Text5.open(QIODevice::ReadOnly);
    QTextStream in (&Text5);
    while(!in.atEnd()){
        QString line = in.readLine();
        ui->textBrowser->setPlainText(in.readAll());
    }
    QPixmap photo_5("C:/Users/admin/Desktop/hehe.jpg");
    ui->picture->setPixmap(photo_5);
    ui->picture->setPixmap(photo_5.scaled(ui->picture->width(),ui->picture->height(),Qt::KeepAspectRatio));
}
