#include "welcomedialog.h"
#include "ui_welcomedialog.h"
#include "mainwindow.h"
#include "databasediaglog.h"
#include "mycards.h"


welcomeDialog::welcomeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::welcomeDialog)
{
    ui->setupUi(this);


    ui->titleLabel->setAlignment(Qt::AlignCenter);
    ui->titleLabel->setGeometry(0, 200, width(), 50);

    ui->lineEdit->setGeometry(275, 250, 200, 30);




    ui->titleLabel_2->setFont(QFont("Arial", 40, QFont::Bold));
    ui->titleLabel_2->setAlignment(Qt::AlignCenter);
    ui->titleLabel_2->setGeometry(0, 50, width(), 60);




    ui->startButton->setGeometry(275, 310, 200, 80);

    ui->photoButton_1->setGeometry(285, 410, 180, 30);
    ui->labelPhoto->setGeometry(350, 450, 50, 50);

    ui->leaderButton->setGeometry(600, 460, 150, 40 );
    ui->leaderButton->setText("Таблица лидеров");





    QPushButton *myButton = new QPushButton("Правила", this);
    myButton->setToolTip("Правила простые: требуется последовательно разложить всю колоду по мастям, соблюдая принятую иерархию значений. Начинают с тузов и далее — от двоек до королей.\n"
                         "В игровом поле разрешается перекладывать карты. При этом младшую допустимо класть на уже открытую старшую, с учетом чередования масти «красное-черное».\n"
                         "Если требуется, то перекладывают целую стопку. Но при условии соблюдения игровой иерархии.\n"
                         "Если возможные ходы исчерпаны, в оставшейся резервной колоде открывают одну (или три) карты. Когда и в ней карты заканчиваются, колоду переворачивают и начинают заново.\n"
                         "Делают это многократно. Таким образом, при желании можно пролистать резервную стопку и запомнить, чем можно воспользоваться.\n"
                         "В освободившуюся стопку на основном поле можно положить только короля и дальше начать собирать\n"
                         "Игра считается законченной, когда все карты разложены по масти от туза и до короля.");

    myButton->setGeometry(1, 460, 150, 40 );


}

welcomeDialog::~welcomeDialog()
{
    delete ui;
}


void welcomeDialog::on_startButton_clicked()

{
        QString playerName = ui->lineEdit->text();

        if (playerName.isEmpty()) {
                QMessageBox::warning(this, "Ошибка", "Поле с именем не может быть пустым");
                return;
            }

        close();

        MainWindow *mainWindow = new MainWindow;
        mainWindow->setPlayerName(ui->lineEdit->text());
        mainWindow->setImagePlayer(loadedImage);
        mainWindow->show();
}

void welcomeDialog::on_leaderButton_clicked()
{
    dataBaseDiaglog *dataBaseWindow = new dataBaseDiaglog;
    dataBaseWindow->show();
}


void welcomeDialog::on_photoButton_1_clicked()
{
    QString filename = QFileDialog::getOpenFileName(nullptr, "Выберите изображение", QDir::currentPath(), "*.png *.jpg *.gif *.jpeg");
    loadedImage = QImage(filename);
    ui->labelPhoto->setPixmap(QPixmap::fromImage(loadedImage));

}
