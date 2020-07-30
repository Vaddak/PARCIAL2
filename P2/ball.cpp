#include "ball.h"

void ball::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawEllipse(boundingRect());
}

QRectF ball::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

ball::ball(int x, int y)
{
    r = 10;
    posx = x;
    posy = y;
    setPos(posx,posy);
}

int ball::getR()
{
    return r;
}

void ball::setR(int radio)
{
    r = radio;
}

int ball::getPosx()
{
    return posx;
}

void ball::setPosx(int px)
{
    posx=px;
}

int ball::getPosy()
{
    return posy;
}

void ball::setPosy(int py)
{
    posy = py;
}
