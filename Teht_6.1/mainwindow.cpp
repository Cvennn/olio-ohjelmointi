#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    n++;
    QString s = QString::number(n);
    ui->labelCount->setText("Count Painettu: "+s+" kertaa");
    //label teksti laitetaan QString tyyppisenä
    ui->lineEdit->setText(s);
}


void MainWindow::on_btnReset_clicked()
{
    n=0;
    QString s = QString::number(n);
    ui->labelCount->setText("Reset Painettu");
    ui->lineEdit->setText(s);
}



