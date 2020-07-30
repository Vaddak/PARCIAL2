#ifndef BALL_H
#define BALL_H
#include <stdlib.h>
#include <time.h>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QPainter>
#include <QObject>
#include <QList>
#include <QRectF>

class ball: public QObject, public QGraphicsItem
{
  int r;
  int posx, posy;

public:

  ball(int x, int y);
  QRectF boundingRect() const;
  int getR();
  void setR(int radio);
  int getPosx();
  void setPosx(int px);
  int getPosy();
  void setPosy(int py);
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

};


#endif // BALL_H
