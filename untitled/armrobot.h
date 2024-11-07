#ifndef ARMROBOT_H
#define ARMROBOT_H

#include <QMainWindow>
#include <QSlider>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QUrl>


QT_BEGIN_NAMESPACE
namespace Ui {
class armRobot;
}
QT_END_NAMESPACE

class armRobot : public QMainWindow
{
    Q_OBJECT

public:
    armRobot(QWidget *parent = nullptr);
    ~armRobot();

public slots:
    void sendCommand();

private slots:

    void on_servo1_valueChanged(int value);

    void on_servo2_valueChanged(int value);

    void on_servo3_valueChanged(int value);

    void on_servo4_valueChanged(int value);

    void on_servo5_valueChanged(int value);

    void on_gripper_valueChanged(int value);

private:
    Ui::armRobot *ui;
    QNetworkAccessManager *manager;
};
#endif // ARMROBOT_H
