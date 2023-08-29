#include "notice_windows.h"
#include "ui_notice_windows.h"

Notice_windows::Notice_windows(Chat_windows * cw) :
    ui(new Ui::Notice_windows),
    chat_window(cw)
{
    ui->setupUi(this);

    // 创建一个定时器
    QTimer *timer = new QTimer(this);
    // 连接定时器的超时信号到关闭窗口的槽函数
    connect(timer, &QTimer::timeout, this, &Notice_windows::closeWindow);
    // 启动定时器，设置超时时间为几秒
    timer->start(500);
}

Notice_windows::~Notice_windows()
{
    delete ui;
}

void Notice_windows::on_pushButton_clicked()
{
    chat_window->show();
    this->close();
}
void Notice_windows::setButtonText(QString str)
{
    ui->pushButton->setText(str);
}

void Notice_windows::closeWindow()
{
    this->close(); // 关闭通知窗口
}
