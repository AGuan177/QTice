#ifndef MYWIDGET_H
#define MYWIDGET_H

#include<QWidget>
#include"tcpserver.h"
#include<QTcpServer>
#include<QTcpSocket>
#include<QDebug>
#include<QMessageBox>
#include<QTextBrowser>
#include<QSqlError>
#include<QSqlQuery>
#include<QSqlDatabase>
#include <QStringListModel>
#include <QListView>
#include<QFile>
#include<QFileInfo>
#include<QThread>
#include<QTimer>
#include <QDateTime>
#include <QSaveFile>
#include <QTextStream>
#include <QDesktopServices>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class MyWidget; }
QT_END_NAMESPACE

struct  fileinfo{
    bool istransporting;                                    //是否在传输文件
    QString filename;                                       //文件名
    qint64 fileszie;                                        //文件大小
    qint64 receivefilesize;                                 //接受了的文件大小
    QFile* file;                                            //文件指针
    QString sendername;                                     //发送者id号
    QString receivername;                                   //接受者id号
    QString sendtime;                                       //发送时间
};

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();
    bool IsOnline(QString id);                              //判断用户是否在线
    int GetHandleOfId(QString id);                          //得到handle的用户id
    bool ifGroupExist(QString groupname);                   //判断要创建的组是否存在
    void sendfiletoId();                                    //发送文件
    void addMessageToTextBrowser(QString message);          //将日志加载到日志表中
    void updateUserList();                                  //更新在线用户
    QString getheadphotonumber(QString userid);             //得到id号的头像地址
    QStringListModel *online_users_model;

protected slots:
    void slot_readData(int handle, const QByteArray &data); //处理数据槽函数

private slots:
    void slot_disconnect(int handle);                       //处理客户端连接信息槽函数
    void slot_connect(int handle, QTcpSocket *socket);      //处理客户端断开连接信息槽函数

    void on_download_log_clicked();

    void on_clear_log_clicked();

    void on_kick_user_clicked();

private:

    Ui::MyWidget *ui;
    TcpServer *m_tcpServer;                                 //建立通信
    QMap<int, QTcpSocket*> m_socketMap;                     //记录连接信息
    QMap<int, fileinfo*> m_filemap;                         //记录文件信息
    QSqlDatabase db;                                        //数据库
    QString filepath;                                       //文件地址
    QString receivername;                                   //信息接收人
    QTimer timer;                                           //计时器
    QTimer timer_online_users;                              //检测在线人数的计时器
    QList<QString> online_users;
    QList<int> online_handles;

};
#endif // MYWIDGET_H
