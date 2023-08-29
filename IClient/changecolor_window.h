#ifndef CHANGECOLOR_WINDOW_H
#define CHANGECOLOR_WINDOW_H

#include <QDialog>
#include <QString>

namespace Ui {
class ChangeColor_Window;
}

class ChangeColor_Window : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeColor_Window(QWidget *parent = 0);
    ~ChangeColor_Window();

    QString icebreak = "#A5DEE4#51A8DD#2EA9DF";
    QString macaroon= "#B8F1ED#B8F1CC#F1F1B8";
    QString morandi= "#B5C4B1#C1CBD7#C9C0D3";

    QString red = "#F8C3CD#E16B8C#B5495B";
    QString yellow = "#FAD689#F6C555#EFBB24";
    QString green = "#A8D8B9#86C166#5DAC81";

    QString pink = "#FFE5CA#F4C6CD#BC233E";
    QString orange ="#F7E6C4#F4DC7B#B08A17";
    QString purple = "#B28FCE#986DB2#77428D";

private:
    Ui::ChangeColor_Window *ui;

private slots:

    void on_icebreak_clicked();

    void on_macaroon_clicked();

    void on_morandi_clicked();

    void on_red_clicked();

    void on_yellow_clicked();

    void on_green_clicked();

    void on_pink_clicked();

    void on_orange_clicked();

    void on_purple_clicked();

signals:
    void sig_color(QString color);
};

#endif // CHANGECOLOR_WINDOW_H
