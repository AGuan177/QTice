#ifndef GROUPREGSTER_H
#define GROUPREGSTER_H

#include <QWidget>
#include<QTcpSocket>
#include<QDebug>
#include<QMessageBox>
#include <QToolButton>
namespace Ui {
class GroupRegster;
}

class GroupRegster : public QWidget
{
    Q_OBJECT

public:
     GroupRegster(QTcpSocket * tcpsocket);
    ~GroupRegster();
     void showDialog(bool ifsuccess);

     QString id;

private slots:
    void on_pushButtonCreateGroup_clicked();


private:
    Ui::GroupRegster *ui;
    QTcpSocket * tcpSocket;

};

#endif // GROUPREGSTER_H
