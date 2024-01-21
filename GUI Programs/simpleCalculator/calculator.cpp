#include "calculator.h"
#include "ui_calculator.h"
#include "QDebug"

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
}

calculator::~calculator()
{
    delete ui;
}


void calculator::on_addButton_clicked()
{
    int num1 = ui->num1LineEdit->text().toInt();
    int num2 = ui->num2LineEdit->text().toInt();
    int result = num1 + num2;

    QString ourResult = QString::number(result);
    ui->ResultLineEdit->setText(ourResult);
}


void calculator::on_subButton_clicked()
{
    int num1 = ui->num1LineEdit->text().toInt();
    int num2 = ui->num2LineEdit->text().toInt();
    int result = num1 - num2;

    QString ourResult = QString::number(result);
    ui->ResultLineEdit->setText(ourResult);
}


void calculator::on_multiplyButton_clicked()
{
    int num1 = ui->num1LineEdit->text().toInt();
    int num2 = ui->num2LineEdit->text().toInt();
    int result = num1 * num2;

    QString ourResult = QString::number(result);
    ui->ResultLineEdit->setText(ourResult);
}


void calculator::on_divideButton_clicked()
{
    int num1 = ui->num1LineEdit->text().toInt();
    int num2 = ui->num2LineEdit->text().toInt();
    int result = num1 / num2;

    QString ourResult = QString::number(result);
    ui->ResultLineEdit->setText(ourResult);
}

