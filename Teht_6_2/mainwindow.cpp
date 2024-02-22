#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    state=1;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickerHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<<"Button name: "+name;


    if(state==2){
    number2=name.last(1);
    QString prevNum=ui->textNumber2->text();
    ui->textNumber2->setText(prevNum.append(number2)); //lisätään edelliseen numerojonoon uusi numero
    }
    else{
    number1=name.last(1);
    QString prevNum=ui->textNumber1->text();
    ui->textNumber1->setText(prevNum.append(number1));
    }
}

void MainWindow::clearAndEnterHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<<"Button: "+name;

    if(name=="btnNclear"){
        qDebug()<<"clearing";
        number1="";
        number2="";
        ui->textNumber1->setText(number1);
        ui->textNumber2->setText(number1);
        state=1;
    }

    number1=ui->textNumber1->text();    //otetaan numberX muuttujaan uusi numero mikä on kirjoitettu teksti kenttään
    number2=ui->textNumber2->text();

    float n1=number1.toFloat();
    float n2=number2.toFloat();
    switch(operand){
    case 0:
        result=n1+n2;
        qDebug() << number1+" + "+number2;
        break;
    case 1:
        result=n1-n2;
        qDebug() << number1+" - "+number2;
        break;
    case 2:
        result=n1*n2;
        qDebug() << number1+" * "+number2;
        break;
    case 3:
        result=n1/n2;
        qDebug() << number1+" / "+number2;
        break;
    }
        ui->textResult->setText(QString::number(result));


}

void MainWindow::operandHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<<"Button: "+name;

    state=2;
}



/*** Napit 0-9 ***/
void MainWindow::on_btnN1_clicked()
{
    numberClickerHandler();
}
void MainWindow::on_btnN2_clicked()
{
    numberClickerHandler();
}
void MainWindow::on_btnN3_clicked()
{
    numberClickerHandler();
}
void MainWindow::on_btnN4_clicked()
{
    numberClickerHandler();
}
void MainWindow::on_btnN5_clicked()
{
    numberClickerHandler();
}
void MainWindow::on_btnN6_clicked()
{
    numberClickerHandler();
}
void MainWindow::on_btnN7_clicked()
{
    numberClickerHandler();
}
void MainWindow::on_btnN8_clicked()
{
    numberClickerHandler();
}
void MainWindow::on_btnN9_clicked()
{
    numberClickerHandler();
}
void MainWindow::on_btnN0_clicked()
{
    numberClickerHandler();
}





/*** operand ***/
void MainWindow::on_btnNadd_clicked()
{
    operand = 0;
    operandHandler();
}
void MainWindow::on_btnNsubtract_clicked()
{
    operand = 1;
    operandHandler();
}
void MainWindow::on_btnNmultiply_clicked()
{
    operand = 2;
    operandHandler();
}
void MainWindow::on_btnNdivide_clicked()
{
    operand = 3;
    operandHandler();
}





/*** clear ja enter ***/
void MainWindow::on_btnNclear_clicked()
{
    clearAndEnterHandler();
}
void MainWindow::on_btnNenter_clicked()
{
    clearAndEnterHandler();
}

