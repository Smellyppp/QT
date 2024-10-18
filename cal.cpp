#include "cal.h"
#include "ui_cal.h"
#include <string.h>

cal::cal(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cal)
{
    ui->setupUi(this);

    this->setWindowTitle("计算机");

    QIcon con("C:\\Users\\G1581\\Desktop\\img\\删除键.png");
    ui->cancelonebutton->setIcon(con);
}

cal::~cal()
{
    delete ui;
}
void cal::on_zerobutton_clicked()
{
    str+='0';
    ui->lineEdit->setText(str);
}

void cal::on_onebutton_clicked()
{
    str+='1';
    ui->lineEdit->setText(str);
}

void cal::on_twobutton_clicked()
{
    str+='2';
    ui->lineEdit->setText(str);
}

void cal::on_threebutton_clicked()
{
    str+='3';
    ui->lineEdit->setText(str);
}

void cal::on_fourbutton_clicked()
{
    str+='4';
    ui->lineEdit->setText(str);
}

void cal::on_fivebutton_clicked()
{
    str+='5';
    ui->lineEdit->setText(str);
}

void cal::on_sixbutton_clicked()
{
    str+='6';
    ui->lineEdit->setText(str);
}

void cal::on_sevenbutton_clicked()
{
    str+='7';
    ui->lineEdit->setText(str);
}

void cal::on_eightbutton_clicked()
{
    str+='8';
    ui->lineEdit->setText(str);
}

void cal::on_ninebutton_clicked()
{
    str+='9';
    ui->lineEdit->setText(str);
}

void cal::on_leftbutton_clicked()
{
    str+='(';
    ui->lineEdit->setText(str);
}

void cal::on_rightbutton_clicked()
{
    str+=')';
    ui->lineEdit->setText(str);
}

void cal::on_addbutton_clicked()
{
    str+='+';
    ui->lineEdit->setText(str);
}

void cal::on_divbutton_clicked()
{
    str+='/';
    ui->lineEdit->setText(str);
}

void cal::on_mulbutton_clicked()
{
    str+='*';
    ui->lineEdit->setText(str);
}

void cal::on_subbutton_clicked()
{
    str+='-';
    ui->lineEdit->setText(str);
}

void cal::on_cancelonebutton_clicked()
{
    str.chop(1);
    ui->lineEdit->setText(str);
}


//void cal::on_amountbutton_clicked()
//{
//    str+='=';
//    ui->lineEdit->setText(str);
//}


void cal::on_nobutton_clicked()
{
    str+='.';
    ui->lineEdit->setText(str);
}


void cal::on_cancelallbutton_clicked()
{
    str.clear();
    ui->lineEdit->setText(str);
}






void cal::on_amountbutton_clicked()
{
    str+='=';
    ui->lineEdit->setText(str);
}

