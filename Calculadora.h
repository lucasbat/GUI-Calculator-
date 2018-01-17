#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QMainWindow>

namespace Ui {
class Calculadora;
}

class Calculadora : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculadora(QWidget *parent = 0);
    ~Calculadora();

private slots:
    void on_btnSoma_clicked();

    void on_btnSubtrai_clicked();

    void on_btnDivide_clicked();

    void on_btnMulti_clicked();

    void on_pushButton_clicked();

private:
    Ui::Calculadora *ui;
};

#endif // CALCULADORA_H
