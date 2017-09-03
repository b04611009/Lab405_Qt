#include "phone_enter.h"
#include "ui_phone_enter.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
phone_enter::phone_enter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::phone_enter)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("phone_enter"));
    QFont font("Monaco",14,QFont::Bold);
    ui->pushButton_0->setFont(font);
    ui->pushButton_0->setStyleSheet(" border-width: 3px; border-style: solid; border-color: brown; background-color: white; color: black; ");
    ui->pushButton_1->setFont(font);
    ui->pushButton_1->setStyleSheet(" border-width: 3px; border-style: solid; border-color: brown; background-color: white; color: black; ");
    ui->pushButton_2->setFont(font);
    ui->pushButton_2->setStyleSheet(" border-width: 3px; border-style: solid; border-color: brown; background-color: white; color: black; ");
    ui->pushButton_3->setFont(font);
    ui->pushButton_3->setStyleSheet(" border-width: 3px; border-style: solid; border-color: brown; background-color: white; color: black; ");
    ui->pushButton_4->setFont(font);
    ui->pushButton_4->setStyleSheet(" border-width: 3px; border-style: solid; border-color: brown; background-color: white; color: black; ");
    ui->pushButton_5->setFont(font);
    ui->pushButton_5->setStyleSheet(" border-width: 3px; border-style: solid; border-color: brown; background-color: white; color: black; ");
    ui->pushButton_6->setFont(font);
    ui->pushButton_6->setStyleSheet(" border-width: 3px; border-style: solid; border-color: brown; background-color: white; color: black; ");
    ui->pushButton_7->setFont(font);
    ui->pushButton_7->setStyleSheet(" border-width: 3px; border-style: solid; border-color: brown; background-color: white; color: black; ");
    ui->pushButton_8->setFont(font);
    ui->pushButton_8->setStyleSheet(" border-width: 3px; border-style: solid; border-color: brown; background-color: white; color: black; ");
    ui->pushButton_9->setFont(font);
    ui->pushButton_9->setStyleSheet(" border-width: 3px; border-style: solid; border-color: brown; background-color: white; color: black; ");
    ui->pushButton_back->setFont(font);
    ui->pushButton_back->setStyleSheet(" border-width: 3px; border-style: solid; border-color: brown; background-color: white; color: black; ");
    ui->pushButton_ok->setFont(font);
    ui->pushButton_ok->setStyleSheet(" border-width: 3px; border-style: solid; border-color: brown; background-color: white; color: black; ");
    ui->pushButton_add->setFont(font);
    ui->pushButton_add->setStyleSheet(" border-width: 3px; border-style: solid; border-color: brown; background-color: white; color: black; ");
    QPixmap icon("C:/Users/admin/Desktop/phonenumber/traffic-sign.png");
    ui->pic->setPixmap(icon.scaled(ui->pic->width(),ui->pic->height(),Qt::KeepAspectRatio));
    ui->labelphone->setStyleSheet(" border-width: 5px; border-style: solid; border-color: black; background-color: white; color: black; ");
}

phone_enter::~phone_enter()
{
    delete ui;
}

void phone_enter::on_pushButton_1_clicked()
{

    if(phonenum.length()<20){
        phonenum += " 1";
        ui->labelphone->setText(phonenum);
    }
}

void phone_enter::on_pushButton_2_clicked()
{
    if(phonenum.length()<20){
        phonenum += " 2";
        ui->labelphone->setText(phonenum);
    }
}


void phone_enter::on_pushButton_3_clicked()
{
    if(phonenum.length()<20){
        phonenum += " 3";
        ui->labelphone->setText(phonenum);
    }
}

void phone_enter::on_pushButton_4_clicked()
{
    if(phonenum.length()<20){
        phonenum += " 4";
        ui->labelphone->setText(phonenum);
    }
}


void phone_enter::on_pushButton_5_clicked()
{
    if(phonenum.length()<20){
        phonenum += " 5";
        ui->labelphone->setText(phonenum);
    }
}

void phone_enter::on_pushButton_6_clicked()
{
    if(phonenum.length()<20){
        phonenum += " 6";
        ui->labelphone->setText(phonenum);
    }
}

void phone_enter::on_pushButton_7_clicked()
{
    if(phonenum.length()<20){
        phonenum += " 7";
        ui->labelphone->setText(phonenum);
    }
}

void phone_enter::on_pushButton_8_clicked()
{
    if(phonenum.length()<20){
        phonenum += " 8";
        ui->labelphone->setText(phonenum);
    }
}

void phone_enter::on_pushButton_9_clicked()
{
    if(phonenum.length()<20){
        phonenum += " 9";
        ui->labelphone->setText(phonenum);
    }
}

void phone_enter::on_pushButton_0_clicked()
{
    if(phonenum.length()<20){
        phonenum += " 0";
        ui->labelphone->setText(phonenum);
    }
}

void phone_enter::on_pushButton_back_clicked()
{
    if(phonenum.length()>2){
        phonenum = phonenum.remove(phonenum.length()-2,phonenum.length()-1);
        ui->labelphone->setText(phonenum);
    }
}

void phone_enter::on_pushButton_ok_clicked()
{
    if (phonenum.length()<20){
        QMessageBox::warning(0,0,"invalid phone");
        close();
    }
    phonenum2 = phonenum;
    phonenum2.replace(QString(" "),QString(""));
    phonenum2.replace(0,1,QString(""));
    QFile inputFile("C:/Users/admin/Desktop/phonenumber/data.csv");
    QStringList phonelist;
    QStringList pointlist;
    if (inputFile.exists()){
        if(inputFile.open(QIODevice::ReadOnly)){
            QTextStream in (&inputFile);
            while(!in.atEnd()){
                QString line = in.readLine();
                phonelist.append(line.split(',').first());
                pointlist.append(line.split(',')[1]);
                }
        }
        inputFile.close();
        if (phonenum2==phonelist[0])
            ui->point->setText(pointlist[0]+" point");
        else if (phonenum2==phonelist[1])
            ui->point->setText(pointlist[1]+" point");
        else if (phonenum2==phonelist[2])
            ui->point->setText(pointlist[2]+" point");
        else
            ui->point->setText("No data");
    }
    else
        QMessageBox::warning(0,0,"Error");
}
void phone_enter::on_pushButton_add_clicked()
{
    if (phonenum.length()<20){
        QMessageBox::warning(0,0,"invalid phone");
        close();
    }
    else{
        phonenum2=phonenum;
        phonenum2.replace(QString(" "),QString(""));
        phonenum2.replace(0,1,QString(""));
        QFile inputFile("C:/Users/admin/Desktop/phonenumber/data.csv");
        QStringList phonelist;
        QStringList pointlist;
        if (inputFile.exists()){
            if(inputFile.open(QIODevice::ReadOnly)){
                QTextStream in (&inputFile);
                while(!in.atEnd()){
                    QString line = in.readLine();
                    phonelist.append(line.split(',').first());
                    pointlist.append(line.split(',')[1]);
                    }
            }
            inputFile.close();
            if (phonenum2==phonelist[0]){
                int temp = pointlist[0].toInt();
                temp = temp+1;
                QString finalpoint;
                finalpoint=QString::number(temp);
                ui->point->setText(finalpoint+" point");
            }
            else if (phonenum2==phonelist[1]){
                int temp = pointlist[1].toInt();
                temp = temp+1;
                QString finalpoint;
                finalpoint=QString::number(temp);
                ui->point->setText(finalpoint+" point");
            }
            else if (phonenum2==phonelist[2]){
                int temp = pointlist[2].toInt();
                temp = temp+1;
                QString finalpoint;
                finalpoint=QString::number(temp);
                ui->point->setText(finalpoint+" point");
            }
            else{
                int temp = 0;
                temp = temp+1;
                QString finalpoint;
                finalpoint=QString::number(temp);
                ui->point->setText(finalpoint+" point");
                QMessageBox::information(0,0,"begin to accumulate");
            }
        }
        else
            QMessageBox::warning(0,0,"Error");
    }
}
