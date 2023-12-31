#include "chat_windows.h"
#include "ui_chat_windows.h"
#include "expression.h"
#include <QFile>
#include "screen.h"

Chat_windows::Chat_windows(QTcpSocket * tcpsocket) :
    ui(new Ui::Chat_windows),tcpSocket(tcpsocket)
{
    ui->setupUi(this);
    //关掉竖直滑动栏
    ui->listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //设置工具栏图标
    ui->send_file->setIcon(QIcon(":/new/prefix1/img/folder.svg"));
    ui->emoji->setIcon(QIcon(":/new/prefix1/img/emoji.svg"));
    ui->prtsc->setIcon(QIcon(":/new/prefix1/img/prtsc.svg"));
    ui->send_img->setIcon(QIcon(":/new/prefix1/img/image.svg"));

    connect(&timer,&QTimer::timeout,
            [=]()
            {
               timer.stop();
               senddata();
            }

            );
    QShortcut *key=new QShortcut(QKeySequence(Qt::Key_Return),this);//创建一个快捷键"Key_Return"键
    connect(key,SIGNAL(activated()),this,SLOT(on_send_clicked()));//连接到指定槽函数

    wexpression=new expression(tcpSocket);\
    connect(wexpression, &expression::send_emoj_1, this, &Chat_windows::click_exp);

    QFile::copy(":/new/prefix1/img/head.jpg","./head.jpg");

}

Chat_windows::~Chat_windows()
{
    delete ui;
}

void Chat_windows::on_prtsc_clicked()
{
    s = new Screen;
    connect(s, &Screen::Pixmap_in_screen, this, [=](){
        qDebug() << "receive Pixmap in screen";
        QString filename = s -> ReadFilePath();
        Chat_windows::send_photo(filename);
    });
    s->show();

}

//变换颜色
void Chat_windows::ChangeColor(QString color)
{
    QString color_light = color.mid(0, 7);
    QString color_medium = color.mid(7, 7);
    QString color_hard = color.mid(14, 7);
    ui->listWidget->setStyleSheet("background-color:"+color_light+";""border:none;");
    ui->textEdit->setStyleSheet("background-color:"+color_light+";""border:none;");
    ui->widget->setStyleSheet("background-color:"+color_light+";");
    ui->widget_2->setStyleSheet("background-color:"+color_light+";");
    ui->widget_3->setStyleSheet("background-color:"+color_light+";");
    // 发送按钮
    ui->Send->setStyleSheet("QPushButton#Send{"
                            "font: 12pt \"微软雅黑\";"
                            "color:#000000;"
                            "background-color: "+color_medium+";"+
                            "border:none;"
                            "}"
                            "QPushButton#Send:hover{"
                            "background-color: "+color_hard+";"+
                            "color:#000000;"
                            "}");
}



void Chat_windows::setFriendId(QString friendid)
{
    friend_id = friendid;
}

void Chat_windows::on_Send_clicked()
{
    QString message=ui->textEdit->toPlainText();
    QString nowtime=(QDateTime::currentDateTime()).toString("yyyy-MM-dd hh:mm::ss");
    QString str="#02#/"+your_id+"/"+friend_id+"/"+message+"/"+nowtime;
    tcpSocket->write(str.toUtf8().data());
    this->addMessageToTextEdit(message,QNChatMessage::User_Me,1,headphotonumber);//添加消息
    ui->textEdit->clear();
}


void Chat_windows::on_emoji_clicked()
{
    qDebug()<<"点击表情包栏";
    wexpression->show();
}

void  Chat_windows::setYourId(QString yourid)
{
    your_id = yourid;
}

QString Chat_windows::getYourId()
{
    return your_id;
}

QString Chat_windows::getFriendId()
{
    return friend_id;
}


void Chat_windows::on_send_file_clicked()
{
    //初始化操作
     qDebug() << "******************";
     filepath.clear();//文件路径
     filename.clear();//文件名
     filesize=0;//文件大小
     sendfile=0;//已经发送的文件大小


     //获取文件路径
     filepath=QFileDialog::getOpenFileName(this,"open","../");

     //获取文件信息
     QFileInfo info(filepath);
     filename=info.fileName();
     filesize=info.size();
     //QString filesizestr=QString("%1").arg(filesize);
     QString sender=your_id;
     QString receiver=friend_id;
     QString nowtime=(QDateTime::currentDateTime()).toString("yyyy-MM-dd hh:mm::ss");
     QString head=QString("%1/%2").arg(filename).arg(filesize);
     QString str="#31#/"+sender+"/"+receiver+"/"+head+"/"+nowtime;
     qDebug() << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
     qDebug() << str;



     //发送头部信息
     tcpSocket->write(str.toUtf8().data());
     //防止tcp黏包，需要设置延时20ms
     timer.start(100);


     this->addMessageToTextEdit_document(filename,QNChatMessage::User_Me,1,headphotonumber);//添加消息

}

void Chat_windows::on_send_img_clicked()
{
    //初始化操作
     filepath.clear();//文件路径
     filename.clear();//文件名
     filesize=0;//文件大小
     sendfile=0;//已经发送的文件大小


     //获取文件路径
     filepath=QFileDialog::getOpenFileName(this,"open","../");
     qDebug()<<filepath;
     QString old_name=filepath;
     QString str0 = filepath.section('/',-1,-1);
     QString new_name = str0;
     qDebug()<< "*****************************************";
     qDebug() << str0;
     str0 = "./"+str0;
     QFile fileTemp(str0);
     fileTemp.remove();

     QFile::copy(old_name,new_name); //A路径移动到B路径

     //获取文件信息
     QFileInfo info(filepath);
     filename=info.fileName();
     filesize=info.size();
     //QString filesizestr=QString("%1").arg(filesize);
     QString sender=your_id;
     QString receiver=friend_id;
     QString nowtime=(QDateTime::currentDateTime()).toString("yyyy-MM-dd hh:mm::ss");
     QString head=QString("%1/%2").arg(filename).arg(filesize);
     QString str="#31#/"+sender+"/"+receiver+"/"+head+"/"+nowtime;



     //发送头部信息
     tcpSocket->write(str.toUtf8().data());
     //防止tcp黏包，需要设置延时20ms
     timer.start(100);


     this->addMessageToTextEdit_photo(filename,QNChatMessage::User_Me,1,headphotonumber);//添加消息

}


void Chat_windows::senddata()
{
    qint64 len=0;

    QFile file;
    file.setFileName(filepath);
    file.open(QIODevice::ReadOnly);

    do
    {
        len=0;
        char buf[4*1024]={0};
        len=file.read(buf,sizeof(buf));
        tcpSocket->write(buf,len);
        sendfile+=len;
    }while(len>0);

    file.close();
    qDebug()<<"我成功发送了"<<sendfile<<"大小的文件"<<",文件的真实大小是"<<filesize;
}
void Chat_windows::dealMessage(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type)
{
    messageW->setFixedWidth(this->width());
    QSize size = messageW->fontRect(text,0);
    item->setSizeHint(size);
    messageW->setText(text, time, size, type);
    ui->listWidget->setItemWidget(item, messageW);
}
void Chat_windows::dealMessage_document(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type)
{
    if(type==QNChatMessage::User_She)
    {
        qDebug() << "***************************************************************";
        qDebug() << text;
    }
    messageW->setFixedWidth(this->width());
    QSize size = messageW->fontRect(text,1);
    item->setSizeHint(size);
    messageW->setText(text, time, size, type);
    ui->listWidget->setItemWidget(item, messageW);
}

void Chat_windows::dealMessage_emoj(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type)
{
    qDebug("%s", qPrintable(text));
    messageW->setFixedWidth(this->width());
    QSize size = messageW->fontRect(text,3);
    item->setSizeHint(size);
    messageW->setText(text, time, size, type);
    ui->listWidget->setItemWidget(item, messageW);
}

void Chat_windows::dealMessage_photo(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type,QString filename)
{
    qDebug()<<filename;
    messageW->setFixedWidth(this->width());
    QSize size = messageW->fontRect(text,2);
    item->setSizeHint(size);
    messageW->setText(text, time, size, type);
    ui->listWidget->setItemWidget(item, messageW);
}

void Chat_windows::dealMessageTime(QString curMsgTime)
{
    bool isShowTime = false;
    if(ui->listWidget->count() > 0) {
        QListWidgetItem* lastItem = ui->listWidget->item(ui->listWidget->count() - 1);
        QNChatMessage* messageW = (QNChatMessage*)ui->listWidget->itemWidget(lastItem);
        int lastTime = messageW->time().toInt();
        int curTime = curMsgTime.toInt();
        qDebug() << "curTime lastTime:" << curTime - lastTime;
        isShowTime = ((curTime - lastTime) > 60); // 两个消息相差一分钟
//        isShowTime = true;
    } else {
        isShowTime = true;
    }
    if(isShowTime) {
        QNChatMessage* messageTime = new QNChatMessage(ui->listWidget->parentWidget());
        QListWidgetItem* itemTime = new QListWidgetItem(ui->listWidget);

        QSize size = QSize(this->width(), 40);
        messageTime->resize(size);
        itemTime->setSizeHint(size);
        messageTime->setText(curMsgTime, curMsgTime, size, QNChatMessage::User_Time);
        ui->listWidget->setItemWidget(itemTime, messageTime);
    }
}

void Chat_windows::addMessageToTextEdit_document(QString filename,QNChatMessage::User_Type type,int leftphoto,int rightphoto)
{

    qDebug() << filename;
    QString msg = filename;
    QString time = QString::number(QDateTime::currentDateTime().toTime_t()); //时间戳

    bool isSending = true; // 发送中

    qDebug()<<"addMessage" << msg << time << ui->listWidget->count();
    if(type==QNChatMessage::User_Me)
    {
        if(isSending)
        {
            dealMessageTime(time);

            QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
            QListWidgetItem* item = new QListWidgetItem(ui->listWidget);

            messageW->m_leftPixmap=QPixmap(str_left);
            messageW->m_rightPixmap=QPixmap(str_right);

            dealMessage_document(messageW, item, msg, time, QNChatMessage::User_Me);
        }
        else
        {
            bool isOver = true;
            for(int i = ui->listWidget->count() - 1; i > 0; i--)
            {
                QNChatMessage* messageW = (QNChatMessage*)ui->listWidget->itemWidget(ui->listWidget->item(i));
                if(messageW->text() == msg)
                {
                    isOver = false;
                }
            }
            if(isOver)
            {
                dealMessageTime(time);

                QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
                QListWidgetItem* item = new QListWidgetItem(ui->listWidget);

                messageW->m_leftPixmap=QPixmap(str_left);
                messageW->m_rightPixmap=QPixmap(str_right);


                dealMessage_document(messageW, item, msg, time, QNChatMessage::User_Me);
            }
        }
    }
    else if(type==QNChatMessage::User_She)
    {
        if(msg != "")
        {
            dealMessageTime(time);
            QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
            QListWidgetItem* item = new QListWidgetItem(ui->listWidget);

            messageW->m_leftPixmap=QPixmap(str_left);
            messageW->m_rightPixmap=QPixmap(str_right);

            qDebug() << "******111";
            dealMessage_document(messageW, item, msg, time, QNChatMessage::User_She);
        }
    }
    ui->listWidget->setCurrentRow(ui->listWidget->count()-1);
}

void Chat_windows::addMessageToTextEdit_photo(QString filename,QNChatMessage::User_Type type,int leftphoto,int rightphoto)
{

    qDebug() << filename;
    QString msg = filename;
    QString time = QString::number(QDateTime::currentDateTime().toTime_t()); //时间戳

    bool isSending = true; // 发送中

    qDebug()<<"addMessage" << msg << time << ui->listWidget->count();
    if(type==QNChatMessage::User_Me)
    {
        if(isSending)
        {
            dealMessageTime(time);

            QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
            QListWidgetItem* item = new QListWidgetItem(ui->listWidget);

            messageW->m_leftPixmap=QPixmap(str_left);
            messageW->m_rightPixmap=QPixmap(str_right);

            dealMessage_photo(messageW, item, msg, time, QNChatMessage::User_Me,filename);
        }
        else
        {
            bool isOver = true;
            for(int i = ui->listWidget->count() - 1; i > 0; i--)
            {
                QNChatMessage* messageW = (QNChatMessage*)ui->listWidget->itemWidget(ui->listWidget->item(i));
                if(messageW->text() == msg)
                {
                    isOver = false;
                }
            }
            if(isOver)
            {
                dealMessageTime(time);

                QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
                QListWidgetItem* item = new QListWidgetItem(ui->listWidget);

                messageW->m_leftPixmap=QPixmap(str_left);
                messageW->m_rightPixmap=QPixmap(str_right);


                dealMessage_photo(messageW, item, msg, time, QNChatMessage::User_Me,filename);
            }
        }
    }
    else if(type==QNChatMessage::User_She)
    {
        if(msg != "")
        {
            dealMessageTime(time);
            QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
            QListWidgetItem* item = new QListWidgetItem(ui->listWidget);

            messageW->m_leftPixmap=QPixmap(str_left);
            messageW->m_rightPixmap=QPixmap(str_right);

            qDebug() << "******111";
            dealMessage_photo(messageW, item, msg, time, QNChatMessage::User_She,filename);
        }
    }
    ui->listWidget->setCurrentRow(ui->listWidget->count()-1);
}

void Chat_windows::addMessageToTextEdit(QString str,QNChatMessage::User_Type type,int leftphoto,int rightphoto)
{
    QString msg = str;

    QString time = QString::number(QDateTime::currentDateTime().toTime_t()); //时间戳

    bool isSending = true; // 发送中

    qDebug()<<"addMessage" << msg << time << ui->listWidget->count();
    if(type==QNChatMessage::User_Me)
    {
        if(isSending)
        {
            dealMessageTime(time);

            QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
            QListWidgetItem* item = new QListWidgetItem(ui->listWidget);

            messageW->m_leftPixmap=QPixmap(str_left);
            messageW->m_rightPixmap=QPixmap(str_right);

            dealMessage(messageW, item, msg, time, QNChatMessage::User_Me);
        }
        else
        {
            bool isOver = true;
            for(int i = ui->listWidget->count() - 1; i > 0; i--)
            {
                QNChatMessage* messageW = (QNChatMessage*)ui->listWidget->itemWidget(ui->listWidget->item(i));
                if(messageW->text() == msg)
                {
                    isOver = false;
                }
            }
            if(isOver)
            {
                dealMessageTime(time);

                QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
                QListWidgetItem* item = new QListWidgetItem(ui->listWidget);
                messageW->m_leftPixmap=QPixmap(str_left);
                messageW->m_rightPixmap=QPixmap(str_right);
                dealMessage(messageW, item, msg, time, QNChatMessage::User_Me);

            }
        }
    }
    else if(type==QNChatMessage::User_She)
    {
        if(msg != "")
        {
            dealMessageTime(time);
            QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
            QListWidgetItem* item = new QListWidgetItem(ui->listWidget);

            messageW->m_leftPixmap=QPixmap(str_left);
            messageW->m_rightPixmap=QPixmap(str_right);

            qDebug() << "******111";
            dealMessage(messageW, item, msg, time, QNChatMessage::User_She);
        }
    }
    ui->listWidget->setCurrentRow(ui->listWidget->count()-1);
}

void Chat_windows::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event);
    for(int i = 0; i < ui->listWidget->count(); i++) {
        QNChatMessage* messageW = (QNChatMessage*)ui->listWidget->itemWidget(ui->listWidget->item(i));
        QListWidgetItem* item = ui->listWidget->item(i);
        dealMessage(messageW, item, messageW->text(), messageW->time(), messageW->userType());
    }
}

QString Chat_windows::returnPhotoPath(int i)
{
    qDebug()<<i;
    return ":/new/prefix1/img/head.jpg";
}


void Chat_windows::addMessageToTextEdit_emoj(QString str,QNChatMessage::User_Type type,int leftphoto,int rightphoto)
{
    QString msg = str;

    QString time = QString::number(QDateTime::currentDateTime().toTime_t()); //时间戳

    bool isSending = true; // 发送中

    if(type==QNChatMessage::User_Me)
    {
        if(isSending)
        {
            qDebug() << "User_Me Sending emoji" << "is Sending";
            dealMessageTime(time);

            QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
            QListWidgetItem* item = new QListWidgetItem(ui->listWidget);

            messageW->m_leftPixmap=QPixmap(str_left);
            messageW->m_rightPixmap=QPixmap(str_right);

            dealMessage_emoj(messageW, item, msg, time, QNChatMessage::User_Me);
        }
        else
        {
            bool isOver = true;
            qDebug() << "User_Me Sending emoji" << "is OVer";
            for(int i = ui->listWidget->count() - 1; i > 0; i--)
            {
                QNChatMessage* messageW = (QNChatMessage*)ui->listWidget->itemWidget(ui->listWidget->item(i));
                if(messageW->text() == msg)
                {
                    isOver = false;
                }
            }
            if(isOver)
            {
                dealMessageTime(time);

                QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
                QListWidgetItem* item = new QListWidgetItem(ui->listWidget);
                messageW->m_leftPixmap=QPixmap(str_left);
                messageW->m_rightPixmap=QPixmap(str_right);
                dealMessage_emoj(messageW, item, msg, time, QNChatMessage::User_Me);

            }
        }
    }
    else if(type==QNChatMessage::User_She)
    {
        qDebug() << "User_She Sending emoji";
        if(msg != "")
        {
            dealMessageTime(time);
            QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
            QListWidgetItem* item = new QListWidgetItem(ui->listWidget);

            messageW->m_leftPixmap=QPixmap(str_left);
            messageW->m_rightPixmap=QPixmap(str_right);

            qDebug() << "******111";
            dealMessage_emoj(messageW, item, msg, time, QNChatMessage::User_She);
        }
    }
    ui->listWidget->setCurrentRow(ui->listWidget->count()-1);
}

void Chat_windows::click_exp(QString message)
{
    qDebug("receive the emoji: %s", qPrintable(message));
    QString nowtime=(QDateTime::currentDateTime()).toString("yyyy-MM-dd hh:mm::ss");
    QString str="#02#/"+your_id+"/"+friend_id+"/"+message+"/"+nowtime;
    QString Filename = ":/new/prefix1/img/" + message;
    tcpSocket->write(str.toUtf8().data());
    this->addMessageToTextEdit_emoj(Filename,QNChatMessage::User_Me,1,1);//添加消息
}

void Chat_windows::send_photo(QString message)
{
     qDebug()<<"in send_photo";
     filepath=message;
     qDebug()<<filepath;
     QString old_name=filepath;
     QString str0 = filepath.section('/',-1,-1);

     QString new_name=str0;
     str0 = "./"+str0;
     QFile fileTemp(str0);
     fileTemp.remove();

     QFile::copy(old_name,new_name); //A路径移动到B路径

     //获取文件信息
     QFileInfo info(filepath);
     filename=info.fileName();
     filesize=info.size();
     //QString filesizestr=QString("%1").arg(filesize);
     QString sender=your_id;
     QString receiver=friend_id;
     QString nowtime=(QDateTime::currentDateTime()).toString("yyyy-MM-dd hh:mm::ss");
     QString head=QString("%1/%2").arg(filename).arg(filesize);
     QString str="#31#/"+sender+"/"+receiver+"/"+head+"/"+nowtime;



     //发送头部信息
     tcpSocket->write(str.toUtf8().data());
     //防止tcp黏包，需要设置延时20ms
     timer.start(100);


     this->addMessageToTextEdit_photo(filename,QNChatMessage::User_Me,1,headphotonumber);//添加消息
}

void Chat_windows::reciting_poetry(){

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, [=]() {

        QString message = poetry::getRandomPoetry(index);
        index = (index+1)%poetry::getPoetryNumber();
        QString nowtime=(QDateTime::currentDateTime()).toString("yyyy-MM-dd hh:mm::ss");

        // 发信
        QString str="#02#/""3""/""3""/"+message+"/"+nowtime;
        tcpSocket->write(str.toUtf8().data());
        this->addMessageToTextEdit(message,QNChatMessage::User_Me,1,headphotonumber);//添加消息

        // 回信
        QTimer::singleShot(200, [=]() {
            QString replyMessage = poetry::getRandomPoetry(index);
            index = (index+1)%poetry::getPoetryNumber();
            QString replyNowTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
            QString replyStr = "#02#/""3""/""3""/" + replyMessage + "/" + replyNowTime;
            tcpSocket->write(replyStr.toUtf8());
            this->addMessageToTextEdit(replyMessage, QNChatMessage::User_Me, 1, headphotonumber);  // 添加消息
        });
     });

    // 刷屏速度
    timer->start(400);

}

