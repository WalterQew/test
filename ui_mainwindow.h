/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Aug 17 18:33:14 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_File_N;
    QAction *actionOpen_O;
    QAction *actionClose_C;
    QAction *actionSave_S;
    QAction *actionSave_as_A;
    QAction *actionExit_X;
    QAction *actionUndo_Z;
    QAction *actionCut_X;
    QAction *actionCopy_V;
    QAction *actionPaste_V;
    QAction *actionFind_F;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile_F;
    QMenu *menuEdit_E;
    QMenu *menuHelp_H;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(646, 403);
        actionNew_File_N = new QAction(MainWindow);
        actionNew_File_N->setObjectName(QString::fromUtf8("actionNew_File_N"));
        actionOpen_O = new QAction(MainWindow);
        actionOpen_O->setObjectName(QString::fromUtf8("actionOpen_O"));
        actionClose_C = new QAction(MainWindow);
        actionClose_C->setObjectName(QString::fromUtf8("actionClose_C"));
        actionSave_S = new QAction(MainWindow);
        actionSave_S->setObjectName(QString::fromUtf8("actionSave_S"));
        actionSave_as_A = new QAction(MainWindow);
        actionSave_as_A->setObjectName(QString::fromUtf8("actionSave_as_A"));
        actionExit_X = new QAction(MainWindow);
        actionExit_X->setObjectName(QString::fromUtf8("actionExit_X"));
        actionUndo_Z = new QAction(MainWindow);
        actionUndo_Z->setObjectName(QString::fromUtf8("actionUndo_Z"));
        actionCut_X = new QAction(MainWindow);
        actionCut_X->setObjectName(QString::fromUtf8("actionCut_X"));
        actionCopy_V = new QAction(MainWindow);
        actionCopy_V->setObjectName(QString::fromUtf8("actionCopy_V"));
        actionPaste_V = new QAction(MainWindow);
        actionPaste_V->setObjectName(QString::fromUtf8("actionPaste_V"));
        actionFind_F = new QAction(MainWindow);
        actionFind_F->setObjectName(QString::fromUtf8("actionFind_F"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 646, 23));
        menuFile_F = new QMenu(menuBar);
        menuFile_F->setObjectName(QString::fromUtf8("menuFile_F"));
        menuEdit_E = new QMenu(menuBar);
        menuEdit_E->setObjectName(QString::fromUtf8("menuEdit_E"));
        menuHelp_H = new QMenu(menuBar);
        menuHelp_H->setObjectName(QString::fromUtf8("menuHelp_H"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile_F->menuAction());
        menuBar->addAction(menuEdit_E->menuAction());
        menuBar->addAction(menuHelp_H->menuAction());
        menuFile_F->addAction(actionNew_File_N);
        menuFile_F->addAction(actionOpen_O);
        menuFile_F->addAction(actionClose_C);
        menuFile_F->addSeparator();
        menuFile_F->addAction(actionSave_S);
        menuFile_F->addAction(actionSave_as_A);
        menuFile_F->addSeparator();
        menuFile_F->addAction(actionExit_X);
        menuEdit_E->addAction(actionUndo_Z);
        menuEdit_E->addSeparator();
        menuEdit_E->addAction(actionCut_X);
        menuEdit_E->addAction(actionCopy_V);
        menuEdit_E->addAction(actionPaste_V);
        menuEdit_E->addSeparator();
        menuEdit_E->addAction(actionFind_F);
        menuHelp_H->addAction(actionAbout);
        toolBar->addAction(actionNew_File_N);
        toolBar->addAction(actionOpen_O);
        toolBar->addAction(actionSave_S);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo_Z);
        toolBar->addAction(actionCut_X);
        toolBar->addAction(actionCopy_V);
        toolBar->addAction(actionPaste_V);
        toolBar->addSeparator();
        toolBar->addAction(actionFind_F);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNew_File_N->setText(QApplication::translate("MainWindow", "New File(&N)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNew_File_N->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Files/images/add.png\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNew_File_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionOpen_O->setText(QApplication::translate("MainWindow", "open(&O)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen_O->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/File/images/application-exit.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen_O->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionClose_C->setText(QApplication::translate("MainWindow", "close(&C)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClose_C->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/File/images/back.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionClose_C->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionSave_S->setText(QApplication::translate("MainWindow", "save(&S)", 0, QApplication::UnicodeUTF8));
        actionSave_S->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSave_as_A->setText(QApplication::translate("MainWindow", "save as(&A)", 0, QApplication::UnicodeUTF8));
        actionSave_as_A->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionExit_X->setText(QApplication::translate("MainWindow", "exit(&X)", 0, QApplication::UnicodeUTF8));
        actionExit_X->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionUndo_Z->setText(QApplication::translate("MainWindow", "Undo(&Z)", 0, QApplication::UnicodeUTF8));
        actionUndo_Z->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionCut_X->setText(QApplication::translate("MainWindow", "Cut(&X)", 0, QApplication::UnicodeUTF8));
        actionCut_X->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopy_V->setText(QApplication::translate("MainWindow", "Copy(&C)", 0, QApplication::UnicodeUTF8));
        actionCopy_V->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionPaste_V->setText(QApplication::translate("MainWindow", "Paste(&V)", 0, QApplication::UnicodeUTF8));
        actionPaste_V->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionFind_F->setText(QApplication::translate("MainWindow", "Find(&F)", 0, QApplication::UnicodeUTF8));
        actionFind_F->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        menuFile_F->setTitle(QApplication::translate("MainWindow", "File(&F)", 0, QApplication::UnicodeUTF8));
        menuEdit_E->setTitle(QApplication::translate("MainWindow", "Edit(&E)", 0, QApplication::UnicodeUTF8));
        menuHelp_H->setTitle(QApplication::translate("MainWindow", "Help(&H)", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
