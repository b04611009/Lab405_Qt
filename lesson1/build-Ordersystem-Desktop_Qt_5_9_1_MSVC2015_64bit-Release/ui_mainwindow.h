/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionexit;
    QWidget *centralWidget;
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1313, 538);
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QStringLiteral("actionexit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 911, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\250\231\346\245\267\351\253\224"));
        font.setPointSize(28);
        font.setUnderline(false);
        label->setFont(font);
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(251, 197, 281, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font1.setPointSize(12);
        checkBox->setFont(font1);
        checkBox_12 = new QCheckBox(centralWidget);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));
        checkBox_12->setGeometry(QRect(251, 235, 291, 22));
        checkBox_12->setFont(font1);
        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(21, 197, 191, 22));
        checkBox_3->setFont(font1);
        checkBox_4 = new QCheckBox(centralWidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(251, 159, 281, 22));
        checkBox_4->setFont(font1);
        checkBox_5 = new QCheckBox(centralWidget);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(21, 235, 201, 22));
        checkBox_5->setFont(font1);
        checkBox_6 = new QCheckBox(centralWidget);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(21, 121, 221, 22));
        checkBox_6->setFont(font1);
        checkBox_7 = new QCheckBox(centralWidget);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(21, 83, 221, 22));
        checkBox_7->setFont(font1);
        checkBox_8 = new QCheckBox(centralWidget);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setGeometry(QRect(251, 83, 271, 22));
        checkBox_8->setFont(font1);
        checkBox_9 = new QCheckBox(centralWidget);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setGeometry(QRect(21, 159, 191, 22));
        checkBox_9->setFont(font1);
        checkBox_10 = new QCheckBox(centralWidget);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));
        checkBox_10->setGeometry(QRect(251, 121, 281, 22));
        checkBox_10->setFont(font1);
        buttonBox = new QDialogButtonBox(centralWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(610, 270, 291, 51));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 340, 621, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial Black"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(680, 80, 271, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Agency FB"));
        font3.setPointSize(12);
        radioButton->setFont(font3);
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(680, 120, 271, 41));
        radioButton_2->setFont(font3);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 420, 151, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("Times New Roman"));
        font4.setPointSize(20);
        label_3->setFont(font4);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(510, 420, 51, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\250\231\346\245\267\351\253\224"));
        font5.setPointSize(20);
        label_4->setFont(font5);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(940, 390, 171, 51));
        pushButton->setFont(font5);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1313, 17));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionexit);

        retranslateUi(MainWindow);
        QObject::connect(actionexit, SIGNAL(triggered(bool)), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionexit->setText(QApplication::translate("MainWindow", "exit", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "   \351\273\236\351\244\220\347\263\273\347\265\261", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\351\243\257\347\263\260         $30", Q_NULLPTR));
        checkBox_12->setText(QApplication::translate("MainWindow", "\345\220\204\345\274\217\346\274\242\345\240\241 $40", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "\347\203\244\345\220\220\345\217\270     $20", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("MainWindow", "\347\224\237\350\217\234\346\262\231\346\213\211 $25", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("MainWindow", "\347\207\222\351\244\205\346\262\271\346\242\235 $35", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("MainWindow", "\350\230\277\350\224\224\347\263\225     $30", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("MainWindow", "\351\220\265\346\235\277\347\202\222\351\272\265 $50", Q_NULLPTR));
        checkBox_8->setText(QApplication::translate("MainWindow", "\350\224\245\346\262\271\351\244\205     $35", Q_NULLPTR));
        checkBox_9->setText(QApplication::translate("MainWindow", "\350\233\213\351\244\205         $30", Q_NULLPTR));
        checkBox_10->setText(QApplication::translate("MainWindow", "\346\255\220\345\247\206\350\233\213     $20", Q_NULLPTR));
        label_2->setText(QString());
        radioButton->setText(QApplication::translate("MainWindow", "Cash $10 off", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "Credit Card 5% off", Q_NULLPTR));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\345\205\203", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\347\265\220\346\235\237\347\250\213\345\274\217", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
