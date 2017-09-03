#ifndef PHONE_ENTER_H
#define PHONE_ENTER_H

#include <QMainWindow>
#include <QTextEdit>
#include <QLabel>

namespace Ui {
class phone_enter;
}

class phone_enter : public QMainWindow
{
    Q_OBJECT

public:
    explicit phone_enter(QWidget *parent = 0);
    ~phone_enter();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_ok_clicked();


    void on_pushButton_add_clicked();

private:
    Ui::phone_enter *ui;
    QLabel * labelphone;
    QString phonenum;
    QString phonenum2;
};

#endif // PHONE_ENTER_H
