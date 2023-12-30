#ifndef WELCOMEDIALOG_H
#define WELCOMEDIALOG_H

#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>

#include "mainwindow.h"



namespace Ui {
class welcomeDialog;
}

class welcomeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit welcomeDialog(QWidget *parent = 0);
    ~welcomeDialog();

    QPushButton* getStartButton();

signals:

private slots:

    void on_startButton_clicked();

    void on_leaderButton_clicked();

    void on_photoButton_1_clicked();

private:
    Ui::welcomeDialog *ui;
    QImage loadedImage;
};

#endif // WELCOMEDIALOG_H
