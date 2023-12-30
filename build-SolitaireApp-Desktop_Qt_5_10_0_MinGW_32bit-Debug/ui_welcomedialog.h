/********************************************************************************
** Form generated from reading UI file 'welcomedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEDIALOG_H
#define UI_WELCOMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_welcomeDialog
{
public:
    QPushButton *startButton;
    QLineEdit *lineEdit;
    QPushButton *leaderButton;
    QLabel *titleLabel_2;
    QLabel *titleLabel;
    QLabel *labelPhoto;
    QPushButton *photoButton_1;

    void setupUi(QDialog *welcomeDialog)
    {
        if (welcomeDialog->objectName().isEmpty())
            welcomeDialog->setObjectName(QStringLiteral("welcomeDialog"));
        welcomeDialog->resize(750, 500);
        welcomeDialog->setMinimumSize(QSize(750, 500));
        welcomeDialog->setMaximumSize(QSize(1250, 800));
        startButton = new QPushButton(welcomeDialog);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(200, 280, 211, 71));
        lineEdit = new QLineEdit(welcomeDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(210, 220, 181, 41));
        leaderButton = new QPushButton(welcomeDialog);
        leaderButton->setObjectName(QStringLiteral("leaderButton"));
        leaderButton->setGeometry(QRect(670, 470, 81, 31));
        leaderButton->setStyleSheet(QStringLiteral(""));
        titleLabel_2 = new QLabel(welcomeDialog);
        titleLabel_2->setObjectName(QStringLiteral("titleLabel_2"));
        titleLabel_2->setGeometry(QRect(260, 80, 131, 61));
        titleLabel = new QLabel(welcomeDialog);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(270, 170, 71, 21));
        labelPhoto = new QLabel(welcomeDialog);
        labelPhoto->setObjectName(QStringLiteral("labelPhoto"));
        labelPhoto->setGeometry(QRect(280, 400, 50, 50));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelPhoto->sizePolicy().hasHeightForWidth());
        labelPhoto->setSizePolicy(sizePolicy);
        labelPhoto->setMinimumSize(QSize(50, 50));
        labelPhoto->setStyleSheet(QStringLiteral(""));
        labelPhoto->setFrameShape(QFrame::Box);
        labelPhoto->setFrameShadow(QFrame::Sunken);
        labelPhoto->setAlignment(Qt::AlignCenter);
        photoButton_1 = new QPushButton(welcomeDialog);
        photoButton_1->setObjectName(QStringLiteral("photoButton_1"));
        photoButton_1->setGeometry(QRect(200, 360, 211, 31));
        photoButton_1->setStyleSheet(QStringLiteral(""));

        retranslateUi(welcomeDialog);

        QMetaObject::connectSlotsByName(welcomeDialog);
    } // setupUi

    void retranslateUi(QDialog *welcomeDialog)
    {
        welcomeDialog->setWindowTitle(QApplication::translate("welcomeDialog", "\320\237\321\200\320\270\320\262\320\265\321\202!", nullptr));
        startButton->setText(QApplication::translate("welcomeDialog", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        leaderButton->setText(QString());
        titleLabel_2->setText(QApplication::translate("welcomeDialog", "\320\237\320\260\321\201\321\214\321\217\320\275\321\201 \"\320\232\320\276\321\201\321\213\320\275\320\272\320\260\"", nullptr));
        titleLabel->setText(QApplication::translate("welcomeDialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\260\321\210\320\265 \320\270\320\274\321\217:", nullptr));
        labelPhoto->setText(QString());
        photoButton_1->setText(QApplication::translate("welcomeDialog", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\204\320\276\321\202\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcomeDialog: public Ui_welcomeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEDIALOG_H
