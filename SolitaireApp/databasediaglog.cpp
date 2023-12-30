#include "databasediaglog.h"
#include "ui_databasediaglog.h"


dataBaseDiaglog::dataBaseDiaglog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dataBaseDiaglog)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./database.db");
    if (db.open())
    {
        qDebug("open");
    }
    else
    {
        qDebug("ne open");
    }
    query = new QSqlQuery(db);
    query->exec("CREATE TABLE Results(Имя TEXT, Время TEXT);");
    model = new QSqlTableModel(this, db);

    model->setTable("Results");
    model->select();

    ui->tableView->setModel(model);

}

dataBaseDiaglog::~dataBaseDiaglog()
{
    delete ui;
}

void dataBaseDiaglog::on_pushButton_clicked()
{
    close();
}

