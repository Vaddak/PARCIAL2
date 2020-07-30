#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <stdlib.h>
#include <time.h>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QPainter>
#include <QObject>
#include <QList>
#include <QRectF>
#include <random>


#include <QMainWindow>
#include "ball.h"
#include "obstaculo.h"
#include "specialball.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
 //------------------------- FUNCIONES PARA APARECER Y DESAPARECER OBSTACULOS -----------------------
  /*void wall1on();
  void wall1off();
  void wall2on();
  void wall2off();
  void wall3on();
  void wall3off();
  void wall4on();
  void wall4off();
  void wall5on();
  void wall5off();*/

//-------------------------- FUNCIONES PARA APARECER Y DESAPARECER PELOTAS -------------------------
  void unoon();
  void unooff();
 /* void doson();
  void dosoff();
  void treson();
  void tresoff();
  void cuatroon();
  void cuatroff();
  void cincoon();
  void cincooff();
  void seison();
  void seisoff();
  void sieteon();
  void sieteoff();*/


  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();


//---------------------------------- LISTA DE OBJETOS ---------------------------------------
private:
  QTimer *timer1, *timer2;
  ball *uno, *dos, *tres, *cuatro, *cinco, *seis, *siete;
  Ui::MainWindow *ui;
  QGraphicsScene *scene;
  obstaculo *up, *down, *right, *left, *wall1, *wall2, *wall3, *wall4, *wall5;

};
#endif // MAINWINDOW_H
