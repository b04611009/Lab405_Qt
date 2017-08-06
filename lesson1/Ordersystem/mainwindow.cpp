#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAbstractButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Ordering System");
    ui->label->setAlignment(Qt::AlignCenter);
}
int total = 0;
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_7_toggled(bool checked)
{
    if(checked)             //用勾選與否的狀態來判斷是否將這項加進去
        total = total + 50 ;
    else                    //反選取後將原來加上去的錢扣除
        total = total - 50 ;
}
void MainWindow::on_checkBox_6_toggled(bool checked)
{
    if(checked)
        total = total + 30 ;
    else
        total = total - 30 ;
}
void MainWindow::on_checkBox_9_toggled(bool checked)
{
    if(checked)
        total = total + 30 ;
    else
        total = total - 30 ;
}
void MainWindow::on_checkBox_3_toggled(bool checked)
{
    if(checked)
        total = total + 20 ;
    else
        total = total - 20 ;
}
void MainWindow::on_checkBox_5_toggled(bool checked)
{
    if(checked)
        total = total + 35 ;
    else
        total = total - 35 ;
}
void MainWindow::on_checkBox_8_toggled(bool checked)
{
    if(checked)
        total = total + 35 ;
    else
        total = total - 35 ;
}
void MainWindow::on_checkBox_10_toggled(bool checked)
{
    if(checked)
        total = total + 20 ;
    else
        total = total - 20 ;
}
void MainWindow::on_checkBox_4_toggled(bool checked)
{
    if(checked)
        total = total + 25 ;
    else
        total = total - 25 ;
}
void MainWindow::on_checkBox_toggled(bool checked)
{
    if(checked)
        total = total + 30 ;
    else
        total = total - 30 ;
}
void MainWindow::on_checkBox_12_toggled(bool checked)
{
    if(checked)
        total = total + 40 ;
    else
        total = total - 40 ;
}
void MainWindow::on_radioButton_toggled(bool checked)
{
    if(checked)
        total = total - 10 ;
    else
        total = total + 10 ;
}
void MainWindow::on_radioButton_2_toggled(bool checked)
{
    if(checked)
        total = 0.95 * total ;
    else
        total = total / 0.95 ;
}
void MainWindow::on_buttonBox_accepted()
{
    ui->label_2->setText("Thanks for coming ");
    ui->label_3->setNum(total) ;
}
void MainWindow::on_buttonBox_rejected()
{
    ui->label_2->setText("Please choose again");
    total = 0 ;                                 //讓total 回到原始值 0
}
void MainWindow::on_pushButton_clicked()
{
    close ();
}






