/********************************************************************************
** Form generated from reading UI file 'Calculadora.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORA_H
#define UI_CALCULADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QWidget *centralWidget;
    QPushButton *btnSoma;
    QPushButton *btnSubtrai;
    QPushButton *btnMulti;
    QPushButton *btnDivide;
    QLabel *label;
    QLineEdit *Edit1;
    QLineEdit *Edit2;
    QLineEdit *Edit3;
    QLabel *lblOperacao;
    QLabel *label_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QStringLiteral("Calculadora"));
        Calculadora->resize(400, 300);
        centralWidget = new QWidget(Calculadora);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnSoma = new QPushButton(centralWidget);
        btnSoma->setObjectName(QStringLiteral("btnSoma"));
        btnSoma->setGeometry(QRect(90, 70, 31, 27));
        btnSubtrai = new QPushButton(centralWidget);
        btnSubtrai->setObjectName(QStringLiteral("btnSubtrai"));
        btnSubtrai->setGeometry(QRect(130, 70, 31, 27));
        QFont font;
        font.setPointSize(18);
        font.setItalic(true);
        btnSubtrai->setFont(font);
        btnMulti = new QPushButton(centralWidget);
        btnMulti->setObjectName(QStringLiteral("btnMulti"));
        btnMulti->setGeometry(QRect(90, 100, 31, 27));
        btnDivide = new QPushButton(centralWidget);
        btnDivide->setObjectName(QStringLiteral("btnDivide"));
        btnDivide->setGeometry(QRect(130, 100, 31, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 40, 67, 17));
        Edit1 = new QLineEdit(centralWidget);
        Edit1->setObjectName(QStringLiteral("Edit1"));
        Edit1->setGeometry(QRect(10, 40, 101, 27));
        Edit2 = new QLineEdit(centralWidget);
        Edit2->setObjectName(QStringLiteral("Edit2"));
        Edit2->setGeometry(QRect(146, 40, 101, 27));
        Edit3 = new QLineEdit(centralWidget);
        Edit3->setObjectName(QStringLiteral("Edit3"));
        Edit3->setGeometry(QRect(280, 40, 113, 27));
        lblOperacao = new QLabel(centralWidget);
        lblOperacao->setObjectName(QStringLiteral("lblOperacao"));
        lblOperacao->setGeometry(QRect(121, 43, 16, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 43, 16, 17));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 381, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        Calculadora->setCentralWidget(centralWidget);
        btnSoma->raise();
        btnSubtrai->raise();
        btnMulti->raise();
        btnDivide->raise();
        label->raise();
        Edit1->raise();
        Edit2->raise();
        Edit3->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_4->raise();
        label_5->raise();
        lblOperacao->raise();
        label_5->raise();
        menuBar = new QMenuBar(Calculadora);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        Calculadora->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Calculadora);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Calculadora->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Calculadora);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Calculadora->setStatusBar(statusBar);

        retranslateUi(Calculadora);

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QMainWindow *Calculadora)
    {
        Calculadora->setWindowTitle(QApplication::translate("Calculadora", "Calculadora", 0));
        btnSoma->setText(QApplication::translate("Calculadora", "+", 0));
        btnSubtrai->setText(QApplication::translate("Calculadora", "- ", 0));
        btnMulti->setText(QApplication::translate("Calculadora", "*", 0));
        btnDivide->setText(QApplication::translate("Calculadora", "/", 0));
        label->setText(QString());
        lblOperacao->setText(QString());
        label_5->setText(QApplication::translate("Calculadora", "=", 0));
        label_2->setText(QApplication::translate("Calculadora", "N\303\272mero", 0));
        label_3->setText(QApplication::translate("Calculadora", " N\303\272mero", 0));
        label_4->setText(QApplication::translate("Calculadora", " Resposta", 0));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
