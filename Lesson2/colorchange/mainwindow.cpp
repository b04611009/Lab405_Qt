#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImage>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("colorchange"));
    QPixmap Image("C:/Users/admin/Downloads/pokeballs.png");
    ui->label->setPixmap(Image);
    ui->label->setPixmap(Image.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{

    QImage Image("C:/Users/admin/Downloads/pokeballs.png");
    QRgb val;
    QColor oldColor;
      for(int x = 0; x<Image.width(); x++){
            for (int y = 0; y<Image.height(); y++){
               oldColor = QColor(Image.pixel(x,y));
               int ave =(oldColor.red()+oldColor.green()+oldColor.blue())/3;
               val = qRgb (ave,ave,ave);
               Image.setPixel(x,y,val);

         }
      }
    ui->label->setPixmap(QPixmap::fromImage(Image).scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));
    statusBar()->showMessage(tr("GrayScale is done"));

}


void MainWindow::on_pushButton_2_clicked()
{
    QPixmap Image("C:/Users/admin/Downloads/pokeballs.png");
    ui->label->setPixmap(Image);
    ui->label->setPixmap(Image.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));
    statusBar()->showMessage(tr("  "));
}

void MainWindow::on_pushButton_3_clicked()
{
    QString FileName;
    Image = new QImage();
    FileName = QFileDialog::getOpenFileName(this,tr("open file"),"/",tr("Images(*.jpg)"));
    Image-> load (FileName);
    pixmap = QPixmap::fromImage(*Image);
    ui->label_2->setPixmap(pixmap.scaled(ui->label_2->width(),ui->label_2->height(),Qt::KeepAspectRatio));


}
