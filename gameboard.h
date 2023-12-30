#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QGraphicsScene>
#include "card.h"
#include "carddatamanager.h"
#include "settings.h"
#include <QElapsedTimer>
//#include "gameboard.h"
class GameBoard : public QGraphicsScene {

    Q_OBJECT

public:
    GameBoard(const Settings* settings, QObject* parent);
    int m_remaining;
    QElapsedTimer m_timer;

private:
    const Settings* m_settings;
    Card* m_first_card;
    Card* m_second_card;

    CardDataManager m_manager;
    bool m_enabled;


    void startGame();

signals:
    void gameEnded(int time);

public slots:
    void resetGame();

private slots:
    void cardSelected(Card* card);
    void animationFinished();
};

#endif // GAMEBOARD_H
