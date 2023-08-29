#include "changecolor_window.h"
#include "ui_changecolor_window.h"

ChangeColor_Window::ChangeColor_Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeColor_Window)
{
    ui->setupUi(this);
    ui->lineEdit->setText("浅色");
    ui->lineEdit_2->setText("中间色");
    ui->lineEdit_3->setText("深色");
}

ChangeColor_Window::~ChangeColor_Window()
{
    delete ui;
}

void ChangeColor_Window::on_icebreak_clicked()
{
    ui->lineEdit->setText(icebreak.mid(1,6));
    ui->lineEdit_2->setText(icebreak.mid(8,6));
    ui->lineEdit_3->setText(icebreak.mid(15,6));
    emit sig_color(ChangeColor_Window::icebreak);
}


void ChangeColor_Window::on_macaroon_clicked()
{
    ui->lineEdit->setText(macaroon.mid(1,6));
    ui->lineEdit_2->setText(macaroon.mid(8,6));
    ui->lineEdit_3->setText(macaroon.mid(15,6));
    emit sig_color(ChangeColor_Window::macaroon);
}


void ChangeColor_Window::on_morandi_clicked()
{
    ui->lineEdit->setText(morandi.mid(1,6));
    ui->lineEdit_2->setText(morandi.mid(8,6));
    ui->lineEdit_3->setText(morandi.mid(15,6));
    emit sig_color(ChangeColor_Window::morandi);
}


void ChangeColor_Window::on_red_clicked()
{
    ui->lineEdit->setText(red.mid(1,6));
    ui->lineEdit_2->setText(red.mid(8,6));
    ui->lineEdit_3->setText(red.mid(15,6));
    emit sig_color(ChangeColor_Window::red);
}


void ChangeColor_Window::on_yellow_clicked()
{
    ui->lineEdit->setText(yellow.mid(1,6));
    ui->lineEdit_2->setText(yellow.mid(8,6));
    ui->lineEdit_3->setText(yellow.mid(15,6));
    emit sig_color(ChangeColor_Window::yellow);
}


void ChangeColor_Window::on_green_clicked()
{
    ui->lineEdit->setText(green.mid(1,6));
    ui->lineEdit_2->setText(green.mid(8,6));
    ui->lineEdit_3->setText(green.mid(15,6));
    emit sig_color(ChangeColor_Window::green);
}


void ChangeColor_Window::on_pink_clicked()
{
    ui->lineEdit->setText(pink.mid(1,6));
    ui->lineEdit_2->setText(pink.mid(8,6));
    ui->lineEdit_3->setText(pink.mid(15,6));
    emit sig_color(ChangeColor_Window::pink);
}

void ChangeColor_Window::on_orange_clicked()
{
    ui->lineEdit->setText(orange.mid(1,6));
    ui->lineEdit_2->setText(orange.mid(8,6));
    ui->lineEdit_3->setText(orange.mid(15,6));
    emit sig_color(ChangeColor_Window::orange);
}

void ChangeColor_Window::on_purple_clicked()
{
    ui->lineEdit->setText(purple.mid(1,6));
    ui->lineEdit_2->setText(purple.mid(8,6));
    ui->lineEdit_3->setText(purple.mid(15,6));
    emit sig_color(ChangeColor_Window::purple);
}

void ChangeColor_Window::on_pushButton_clicked()
{
    QString str = "";
    str +="#";
    str+=ui->lineEdit->text();
    str +="#";
    str+=ui->lineEdit_2->text();
    str +="#";
    str+=ui->lineEdit_3->text();
    emit sig_color(str);

}

