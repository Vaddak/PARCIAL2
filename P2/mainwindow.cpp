#include "mainwindow.h"
#include "ui_mainwindow.h"


/* ----------------------------------------------- INSTRUCCIONES --------------------------------------------------
 * En la escena deben ir apareciendo objetos afectados por la gravedad con una velocidad inicial en Y diferente de cero (es
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
  ui->graphicsView->setScene(scene);
  up = new obstaculo(1000,20,-0,-400);
  scene->addItem(up);
  left = new obstaculo(20,100, 980,0);
  scene->addItem(left);


}



MainWindow::~MainWindow()
{
  delete ui;
}
/*
galletas.push_back(new Galleta(7,a,b));
scene->addItem(galletas.back());

*/

void MainWindow::wallon()
{
  srand(time(NULL));
  int x =(1 + rand()%(700-1));
  int y =(1 + rand()%(700-1));



}
