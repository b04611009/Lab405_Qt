#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_checkBox_7_toggled(bool checked);
    void on_checkBox_6_toggled(bool checked);
    void on_checkBox_9_toggled(bool checked);
    void on_checkBox_3_toggled(bool checked);
    void on_checkBox_5_toggled(bool checked);
    void on_checkBox_8_toggled(bool checked);
    void on_checkBox_10_toggled(bool checked);
    void on_checkBox_4_toggled(bool checked);
    void on_checkBox_toggled(bool checked);
    void on_checkBox_12_toggled(bool checked);
    void on_radioButton_toggled(bool checked);
    void on_radioButton_2_toggled(bool checked);
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
