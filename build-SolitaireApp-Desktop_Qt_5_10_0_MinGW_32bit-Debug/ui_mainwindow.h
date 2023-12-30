/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
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
#include <QtWidgets/QWidget>
#include "mycards.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    myCards *repeatDeck;
    QLabel *link_1;
    QLabel *labelTime;
    QLabel *labelTime_2;
    QLabel *labelPlayer;
    QLabel *labelPlayerPhoto;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1250, 800);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1250, 800));
        MainWindow->setBaseSize(QSize(1250, 800));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        repeatDeck = new myCards(centralwidget);
        repeatDeck->setObjectName(QStringLiteral("repeatDeck"));
        repeatDeck->setGeometry(QRect(30, 30, 143, 200));
        repeatDeck->setPixmap(QPixmap(QString::fromUtf8("pictures/cards/backCards.png")));
        link_1 = new QLabel(centralwidget);
        link_1->setObjectName(QStringLiteral("link_1"));
        link_1->setGeometry(QRect(370, 260, 521, 101));
        QFont font;
        font.setFamily(QStringLiteral("Niagara Solid"));
        font.setPointSize(82);
        link_1->setFont(font);
        link_1->setStyleSheet(QStringLiteral("color:rgb(202, 0, 0);"));
        link_1->setTextFormat(Qt::AutoText);
        link_1->setAlignment(Qt::AlignCenter);
        labelTime = new QLabel(centralwidget);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(30, 600, 41, 37));
        QFont font1;
        font1.setPointSize(26);
        labelTime->setFont(font1);
        labelTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTime_2 = new QLabel(centralwidget);
        labelTime_2->setObjectName(QStringLiteral("labelTime_2"));
        labelTime_2->setGeometry(QRect(90, 600, 41, 41));
        labelTime_2->setFont(font1);
        labelTime_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelPlayer = new QLabel(centralwidget);
        labelPlayer->setObjectName(QStringLiteral("labelPlayer"));
        labelPlayer->setGeometry(QRect(30, 580, 47, 13));
        labelPlayerPhoto = new QLabel(centralwidget);
        labelPlayerPhoto->setObjectName(QStringLiteral("labelPlayerPhoto"));
        labelPlayerPhoto->setGeometry(QRect(150, 620, 61, 41));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\237\320\260\321\201\321\214\321\217\320\275\321\201!", nullptr));
        repeatDeck->setText(QString());
        link_1->setText(QApplication::translate("MainWindow", "You Win!", nullptr));
        labelTime->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelTime_2->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelPlayer->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        labelPlayerPhoto->setText(QApplication::translate("MainWindow", "\320\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
