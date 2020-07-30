#include "obstaculo.h"

obstaculo::obstaculo(int w_, int h_, int x, int y)
{
    w = w_;
    h = h_;
    posx = x;
    posy = y;

}

int obstaculo::getW()
{
    return w;
}

int obstaculo::getH()
{
    return h;
}

void obstaculo::setW(int ancho)
{
    w = ancho;
}

void obstaculo::setH(int altura)
{
    h = altura;
}

int obstaculo::getPosx()
{
    return posx;
}

void obstaculo::setPosx(int px)
{
    posx=px;
}

int obstaculo::getPosy()
{
    return posy;
}

void obstaculo::setPosy(int py)
{
    posy = py;
}

QRectF obstaculo::boundingRect() const
{
    return QRectF(posx,-posy,w,h);
}

void obstaculo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::black);
    painter->drawRect(boundingRect());
}
