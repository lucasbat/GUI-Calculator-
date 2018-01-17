#include "Calculadora.h"
#include "ui_Calculadora.h"

Calculadora::Calculadora(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculadora)
{
    ui->setupUi(this);
}

Calculadora::~Calculadora()
{
    delete ui;
}

void Calculadora::on_btnSoma_clicked()
{
    ui->lblOperacao->setText("+");

    float num1, num2;
    num1 = ui->Edit1->text().toFloat(NULL);
    num2 = ui->Edit2->text().toFloat(NULL);

    ui->Edit3->setText(QString("%1").arg(num1+num2));
}
void Calculadora::on_btnSubtrai_clicked()
{
    ui->lblOperacao->setText(" -");

    float num3, num4;
    num3 = ui->Edit1->text().toFloat(NULL);
    num4 = ui->Edit2->text().toFloat(NULL);

    ui->Edit3->setText(QString("%1").arg(num3-num4));
}
void Calculadora::on_btnDivide_clicked()
{
    ui->lblOperacao->setText("/");

    float num5, num6;
    num5 = ui->Edit1->text().toFloat(NULL);
    num6 = ui->Edit2->text().toFloat(NULL);

    ui->Edit3->setText(QString("%1").arg(num5/num6));
}

void Calculadora::on_btnMulti_clicked()
{
    ui->lblOperacao->setText("*");

    float num7, num8;
    num7 = ui->Edit1->text().toFloat(NULL);
    num8 = ui->Edit2->text().toFloat(NULL);

    ui->Edit3->setText(QString("%1").arg(num7*num8));
}
