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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QLabel *BackGround;
    QLabel *Title;
    QLabel *BackGround_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTextBrowser *textBrowser;
    QLabel *picture;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1236, 958);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BackGround = new QLabel(centralWidget);
        BackGround->setObjectName(QStringLiteral("BackGround"));
        BackGround->setGeometry(QRect(40, 20, 841, 171));
        Title = new QLabel(centralWidget);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(430, 20, 541, 171));
        QFont font;
        font.setFamily(QStringLiteral("Yu Gothic UI Semibold"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        Title->setFont(font);
        BackGround_2 = new QLabel(centralWidget);
        BackGround_2->setObjectName(QStringLiteral("BackGround_2"));
        BackGround_2->setGeometry(QRect(310, 200, 1151, 731));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 340, 221, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font1.setPointSize(18);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 450, 221, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font2.setPointSize(20);
        pushButton_2->setFont(font2);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 560, 221, 51));
        pushButton_3->setFont(font2);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(90, 670, 221, 51));
        pushButton_4->setFont(font2);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(90, 780, 221, 51));
        pushButton_5->setFont(font2);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(450, 350, 621, 421));
        textBrowser->setFont(font2);
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        picture = new QLabel(centralWidget);
        picture->setObjectName(QStringLiteral("picture"));
        picture->setGeometry(QRect(970, 20, 211, 211));
        MainWindow->setCentralWidget(centralWidget);
        BackGround_2->raise();
        BackGround->raise();
        Title->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        picture->raise();
        textBrowser->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1236, 17));
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
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        BackGround->setText(QString());
#ifndef QT_NO_TOOLTIP
        Title->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI Semibold'; font-size:24pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline; color:#0055ff;\">B04\345\217\260\345\244\247\347\224\237\346\251\237\347\263\273\345\255\270\346\234\203</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Title->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#0055ff;\">B04\345\217\260\345\244\247\347\224\237\346\251\237\347\263\273\345\255\270\346\234\203</span></p></body></html>", Q_NULLPTR));
        BackGround_2->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "\347\263\273\345\255\270\346\234\203\351\225\267", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\211\257\347\263\273\345\255\270\346\234\203\351\225\267", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\345\204\252\350\263\252\346\210\220\345\223\241", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\347\203\244\350\202\211\346\211\233\345\243\251\345\255\220", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\345\215\241\346\213\211OK", Q_NULLPTR));
        picture->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
