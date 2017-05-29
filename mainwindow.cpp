#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "agregarcorreos.h"
#include "agregardestinatarios.h"
#include "enviarcorreo.h"
#include "vercorreosenviados.h"
#include "usuarios.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
vector<Persona*> MainWindow::personas;

void MainWindow::on_pushButton_clicked()
{
    //AgregarCorreo
    agregarcorreos * prueba= new agregarcorreos();
    prueba->show();
}

void MainWindow::on_pushButton_3_clicked()
{

    //Agregar persona.
    agregardestinatarios * prueba2= new agregardestinatarios();
    prueba2->show();

}

void MainWindow::on_pushButton_2_clicked()
{
  //Enviar correo
  EnviarCorreo* prueba3= new EnviarCorreo();
  prueba3->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    //Ver Correos Enviados
    VerCorreosEnviados * prueba4= new VerCorreosEnviados();
    prueba4->show();

}

void MainWindow::on_pushButton_6_clicked()
{
    //Usuarios
     Usuarios * prueba5= new Usuarios();
     prueba5->show();
}
