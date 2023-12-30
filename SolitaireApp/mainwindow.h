#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QTimer>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

#include "mycards.h"
#include "place.h"
#include "welcomedialog.h"
#include "databasediaglog.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setPlayerName(const QString &name);
    void setImagePlayer(const QImage &pic);


    static myCards* currentActiveCard;

public slots:
    void deckRange();

signals:
    void gameResultAdded(const QString& playerName, const QString& durationString);

private slots:
    void newGame();
    void nextCard();
    void haveWeNextStep();
    void gameOver();
    void createSets();
    void saveParameter();
    void whatCardsHere();
    void isThisCardOpen();
    void moveCardToBestPlace();
    void bestPlace();
    void fromWhatPlace();
    void openNextFloorCard();

    void realizeGroup();
    void moveGroup();
    void stopGroup();
    void bestGroupPlace();

    void cardIsOutWindow();

    void updateTimer();


private:
    Ui::MainWindow *ui;

    QPropertyAnimation *anim1;
    QPropertyAnimation *anim2;

    QSequentialAnimationGroup *group;

    QTimer *timer;
    int ms, s, m;

    QString playerName;
    QImage playerImage;


};
#endif // MAINWINDOW_H
