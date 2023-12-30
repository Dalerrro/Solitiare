/********************************************************************************
** Form generated from reading UI file 'databasediaglog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASEDIAGLOG_H
#define UI_DATABASEDIAGLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_dataBaseDiaglog
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QDialog *dataBaseDiaglog)
    {
        if (dataBaseDiaglog->objectName().isEmpty())
            dataBaseDiaglog->setObjectName(QStringLiteral("dataBaseDiaglog"));
        dataBaseDiaglog->resize(461, 343);
        gridLayout = new QGridLayout(dataBaseDiaglog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(dataBaseDiaglog);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        pushButton = new QPushButton(dataBaseDiaglog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(dataBaseDiaglog);

        QMetaObject::connectSlotsByName(dataBaseDiaglog);
    } // setupUi

    void retranslateUi(QDialog *dataBaseDiaglog)
    {
        dataBaseDiaglog->setWindowTitle(QApplication::translate("dataBaseDiaglog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("dataBaseDiaglog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dataBaseDiaglog: public Ui_dataBaseDiaglog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEDIAGLOG_H
