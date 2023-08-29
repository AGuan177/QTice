#include "changecolor_window.h"
#include "ui_changecolor_window.h"

ChangeColor_Window::ChangeColor_Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeColor_Window)
{
    ui->setupUi(this);
    //ui->logo->setSizeIncrement(50,50);
    //ui->logo->setIcon(QIcon(":/new/prefix1/img/logo.jpg"));
    //ui->logo->setIconSize(QSize(100,100));
}

ChangeColor_Window::~ChangeColor_Window()
{
    delete ui;
}



void ChangeColor_Window::on_icebreak_clicked()
{
    emit sig_color(ChangeColor_Window::icebreak);
}


void ChangeColor_Window::on_macaroon_clicked()
{
    emit sig_color(ChangeColor_Window::macaroon);
}


void ChangeColor_Window::on_morandi_clicked()
{
    emit sig_color(ChangeColor_Window::morandi);
}


void ChangeColor_Window::on_red_clicked()
{
    emit sig_color(ChangeColor_Window::red);
}


void ChangeColor_Window::on_yellow_clicked()
{
    emit sig_color(ChangeColor_Window::yellow);
}


void ChangeColor_Window::on_green_clicked()
{
    emit sig_color(ChangeColor_Window::green);
}


void ChangeColor_Window::on_pink_clicked()
{
    emit sig_color(ChangeColor_Window::pink);
}


void ChangeColor_Window::on_orange_clicked()
{
    emit sig_color(ChangeColor_Window::orange);
}


void ChangeColor_Window::on_purple_clicked()
{
    emit sig_color(ChangeColor_Window::purple);
}

