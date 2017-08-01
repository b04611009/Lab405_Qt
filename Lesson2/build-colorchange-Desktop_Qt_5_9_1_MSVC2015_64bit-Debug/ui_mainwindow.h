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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionopen_image;
    QAction *actionsave_image;
    QAction *actionexit;
    QAction *actionOpen_File;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1413, 966);
        actionopen_image = new QAction(MainWindow);
        actionopen_image->setObjectName(QStringLiteral("actionopen_image"));
        actionsave_image = new QAction(MainWindow);
        actionsave_image->setObjectName(QStringLiteral("actionsave_image"));
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QStringLiteral("actionexit"));
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QStringLiteral("actionOpen_File"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(570, 50, 271, 111));
        QFont font;
        font.setFamily(QStringLiteral("Britannic Bold"));
        font.setPointSize(20);
        pushButton->setFont(font);
        pushButton->setAutoFillBackground(true);
        pushButton->setStyleSheet(QStringLiteral("white"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(500, 290, 421, 411));
        label->setAutoFillBackground(true);
        label->setStyleSheet(QStringLiteral("white"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 800, 201, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Harlow Solid Italic"));
        font1.setPointSize(22);
        font1.setItalic(true);
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 50, 271, 111));
        QFont font2;
        font2.setFamily(QStringLiteral("Brush Script MT"));
        font2.setPointSize(22);
        font2.setItalic(true);
        pushButton_3->setFont(font2);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(44, 290, 321, 411));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1413, 17));
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
        QObject::connect(actionexit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionopen_image->setText(QApplication::translate("MainWindow", "open image", Q_NULLPTR));
        actionsave_image->setText(QApplication::translate("MainWindow", "save image", Q_NULLPTR));
        actionexit->setText(QApplication::translate("MainWindow", "exit", Q_NULLPTR));
        actionOpen_File->setText(QApplication::translate("MainWindow", "Open File", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "GrayScale", Q_NULLPTR));
        label->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "Undo", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "ReadImage", Q_NULLPTR));
        label_2->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
