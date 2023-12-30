#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
        QFile f(":/style.qss");
        if (!f.exists())   {
            printf("Unable to set stylesheet, file not found\n");
        }
        else   {
            f.open(QFile::ReadOnly | QFile::Text);
            QTextStream ts(&f);
            qApp->setStyleSheet(ts.readAll());
        }

    welcomeDialog wd;
    wd.show();
    return a.exec();
}
