#ifndef OBSTACULO_H
#define OBSTACULO_H
#include <stdlib.h>
#include <time.h>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QPainter>
#include <QObject>
#include <QList>
#include <QRectF>

class obstaculo: public QGraphicsItem
{
  int w,h;
  int posx, posy;

public:
  obstaculo(int w_, int h_, int x, int y);
  int getW();
  void setW(int ancho);
  int getH();
  void setH(int altura);
  int getPosx();
  void setPosx(int px);
  int getPosy();
  void setPosy(int py);
  QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);


};

#endif // OBSTACULO_H
