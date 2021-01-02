#ifndef POINTS_H
#define POINTS_H
#include <QGraphicsScene>
#include<QGraphicsEllipseItem>
#include<QList>
#include<QMessageBox>
#include<QBrush>
#include"show_winner.h"
enum playerTurn{player1,player2};
struct PointStatus
{
    PointStatus *up;
    PointStatus *down;
    PointStatus *right;
    PointStatus *left;
};

class points : public QGraphicsScene
{
    Q_OBJECT
public:
    points(QObject *parent = 0, int Row_size=11, int Col_size=11);
private:
     PointStatus **PS;
     playerTurn PT;
     QList<QGraphicsItem *>items;
     int RowSize;
     int ColSize;
     int RectCounter;
     int Player1Score;
     int Player2Score;
     PointStatus temp;
private:
     void drawline();
     void ChangePointStatus();
     bool CheckRect();
     void Updating_Score_RectCount();
     void ChangePlayerTurn();
protected:
     void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
signals:
     void UpdatingScoreBoard1(int);
     void UpdatingScoreBoard2(int);
     void Winner(QString);
     void exitmainwindows();
     void PlayerTurn(QString);
public slots:
    
};

#endif // POINTS_H
