#include "snake.h"
#include <QApplication>
#include <QPixmap>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // 使程序在显示启动画面的同时仍能响应鼠标等其他事件
    a.processEvents();
    Snake w;
    //QThread::sleep(3);
    w.show();
    // 结束启动画
    return a.exec();
}
