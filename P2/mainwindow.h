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
  void wallon();
  void wallof();
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private:
  QList <obstaculo*> obstaculos;
  Ui::MainWindow *ui;
  QGraphicsScene *scene;
  obstaculo *up, *down, *right, *left, *wall1, *wall2, *wall3, *wall4, *wall5;
};
#endif // MAINWINDOW_H
