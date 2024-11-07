#include "armrobot.h"
#include "ui_armrobot.h"

armRobot::armRobot(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::armRobot),manager(new QNetworkAccessManager(this))
{

    ui->setupUi(this);;
    connect(ui->servo1, &QSlider::valueChanged, this, &armRobot::sendCommand);
    connect(ui->servo2, &QSlider::valueChanged, this, &armRobot::sendCommand);
    connect(ui->servo3, &QSlider::valueChanged, this, &armRobot::sendCommand);
    connect(ui->servo4, &QSlider::valueChanged, this, &armRobot::sendCommand);
    connect(ui->servo5, &QSlider::valueChanged, this, &armRobot::sendCommand);
    connect(ui->gripper, &QSlider::valueChanged, this, &armRobot::sendCommand);
}


armRobot::~armRobot()
{
    delete ui;
}


void armRobot::on_servo1_valueChanged(int value)
{
    ui->sdlp_1->setText(QString::number(value));

}


void armRobot::on_servo2_valueChanged(int value)
{
    ui->sdlp_2->setText(QString::number(value));

}


void armRobot::on_servo3_valueChanged(int value)
{
    ui->sdlp_3->setText(QString::number(value));

}


void armRobot::on_servo4_valueChanged(int value)
{
    ui->sdlp_4->setText(QString::number(value));

}


void armRobot::on_servo5_valueChanged(int value)
{
    ui->sdlp_5->setText(QString::number(value));

}


void armRobot::on_gripper_valueChanged(int value)
{
    ui->sdlp_gr->setText(QString::number(value));

}

void armRobot::sendCommand() {
    int angle1 = ui->servo1->value();
    int angle2 = ui->servo2->value();
    int angle3 = ui->servo3->value();
    int angle4 = ui->servo4->value();
    int angle5 = ui->servo5->value();
    int angle6 = ui->gripper->value();

    QString url = QString("http://<ESP32_IP>/set?angle1=%1&angle2=%2&angle3=%3&angle4=%4&angle5=%5&angle6=%6")
                      .arg(angle1).arg(angle2).arg(angle3).arg(angle4).arg(angle5).arg(angle6);
    QNetworkRequest request;
    request.setUrl(QUrl(url));

    manager->get(request);
}
