#include "mainwindow.h"
#include "ui_mainwindow.h"


/* ----------------------------------------------- INSTRUCCIONES --------------------------------------------------

En la escena deben ir apareciendo objetos afectados por la gravedad con una velocidad inicial en Y diferente de cero (es
decir que estos objetos describirán una trayectoria parabólica). Los objetos deben aparecer cada cierto tiempo en la parte
superior de la escena en posiciones aleatorias (usted puede escoger los parámetros de la simulación). Además, deben
aparecer y desaparecer obstáculos en la escena cada cierto tiempo con posiciones aleatorias. Los objetos en caída deben
rebotar contra: los obstáculos, la parte superior de la escena, y las partes laterales de la escena. Si los objetos en caída
tocan la parte inferior de la escena deben desaparecer. Adicionalmente, al presionar un botón, debe aparecer un objeto
especial en caída libre. Si dicho objeto especial toca un obstáculo, con cada choque, el objeto especial debe ir

disminuyendo su tamaño hasta desaparecer.
Nota: Usted es libre de escoger los parámetros de la simulación como: los tiempos de duración de los obstáculos en la
escena, la masa de los objetos en caída, cada cuánto aparecen los objetos en caída, etc. Sin embargo, cuando se ejecute el
código se deben observar todos los requisitos que se pidieron, es decir que el tiempo que duran los obstáculos en la escena
debe ser lo suficientemente largo para que reboten algunos objetos, y tal vez lo toque un objeto especial.

-------------------------------------------------------------------------------------------------------------------*/



MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  scene = new QGraphicsScene();
  scene->setSceneRect(0,0,1000,800);
  ui->graphicsView->setScene(scene);
  timer1 = new QTimer;
  timer2 = new QTimer;
  timer3 = new QTimer;

  //agrego las paredes exteriores
  up = new obstaculo(1000,20,0,0);
  scene->addItem(up);
  left = new obstaculo(20,1000,980,0);
  scene->addItem(left);
  right = new obstaculo(20,1000,0,0);
  scene->addItem(right);
  down = new obstaculo(1000,20,0,-780);
  scene->addItem(down);


 //agrego y remuevo las pelotas aleatoriamente y genero el numero aleatorio
  srand(time(NULL));
  int a=(rand()%(1200));
  timer1->start(a);
  connect(timer1,&QTimer::timeout,this,&MainWindow::unoon);

  timer1->start(a);
  connect(timer1,&QTimer::timeout,this,&MainWindow::doson);


  timer1->start(a);
  connect(timer1,&QTimer::timeout,this,&MainWindow::treson);

/*  timer1->start(a);
  connect(timer1,&QTimer::timeout,this,&MainWindow::cuatroon);


  timer1->start(a);
  connect(timer1,&QTimer::timeout,this,&MainWindow::cincoon);*/


  timer2->start(a);
  connect(timer2,&QTimer::timeout,this,&MainWindow::unooff);


}

void MainWindow::unooff()
{
  scene->removeItem(uno);

}


void MainWindow::unoon()
{
  srand(time(NULL));
  int x =(rand()%(700));
  int y =(rand()%(150));
  uno = new ball(x,y);
  scene->addItem(uno);
}

void MainWindow::dosoff()
{
  scene->removeItem(dos);

}


void MainWindow::doson()
{
  srand(time(NULL));
  int x =(rand()%(800));
  int y =(rand()%(150));
  dos = new ball(x,y);
  scene->addItem(dos);
}

void MainWindow::tresoff()
{
  scene->removeItem(tres);

}


void MainWindow::treson()
{
  srand(time(NULL));
  int x =(rand()%(800));
  int y =(rand()%(150));
  tres = new ball(x,y);
  scene->addItem(tres);
}


void MainWindow::cuatrooff()
{
  scene->removeItem(cuatro);

}


void MainWindow::cuatroon()
{
  srand(time(NULL));
  int x =(rand()%(800));
  int y =(rand()%(150));
  cuatro = new ball(x,y);
  scene->addItem(cuatro);
}


void MainWindow::cincooff()
{
  scene->removeItem(cinco);

}


void MainWindow::cincoon()
{
  srand(time(NULL));
  int x =(rand()%(800));
  int y =(rand()%(150));
  dos = new ball(x,y);
  scene->addItem(cinco);
}

MainWindow::~MainWindow()
{
  delete ui;
}





