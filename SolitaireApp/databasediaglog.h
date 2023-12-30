#ifndef DATABASEDIAGLOG_H
#define DATABASEDIAGLOG_H

#include "mainwindow.h"
#include "welcomedialog.h"

#pragma once
#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>


namespace Ui {
class dataBaseDiaglog;
}

class dataBaseDiaglog : public QDialog
{
    Q_OBJECT

public:
    explicit dataBaseDiaglog(QWidget *parent = 0);
    ~dataBaseDiaglog();



public slots:


private slots:
    void on_pushButton_clicked();

private:
    Ui::dataBaseDiaglog *ui;

    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel *model;

};

#endif // DATABASEDIAGLOG_H
