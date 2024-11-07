/********************************************************************************
** Form generated from reading UI file 'armrobot.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARMROBOT_H
#define UI_ARMROBOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_armRobot
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_7;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    QLabel *lbls1;
    QSpacerItem *horizontalSpacer;
    QSlider *servo1;
    QSpacerItem *horizontalSpacer_2;
    QLabel *sdlp_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbls2;
    QSpacerItem *horizontalSpacer_7;
    QSlider *servo2;
    QSpacerItem *horizontalSpacer_8;
    QLabel *sdlp_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbls3;
    QSpacerItem *horizontalSpacer_5;
    QSlider *servo3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *sdlp_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbls4;
    QSpacerItem *horizontalSpacer_3;
    QSlider *servo4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *sdlp_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbls5;
    QSpacerItem *horizontalSpacer_9;
    QSlider *servo5;
    QSpacerItem *horizontalSpacer_10;
    QLabel *sdlp_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblgr;
    QSpacerItem *horizontalSpacer_11;
    QSlider *gripper;
    QSpacerItem *horizontalSpacer_12;
    QLabel *sdlp_gr;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *armRobot)
    {
        if (armRobot->objectName().isEmpty())
            armRobot->setObjectName("armRobot");
        armRobot->resize(632, 512);
        centralwidget = new QWidget(armRobot);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_7 = new QHBoxLayout(centralwidget);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lbls1 = new QLabel(centralwidget);
        lbls1->setObjectName("lbls1");

        horizontalLayout->addWidget(lbls1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        servo1 = new QSlider(centralwidget);
        servo1->setObjectName("servo1");
        servo1->setMaximum(180);
        servo1->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout->addWidget(servo1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        sdlp_1 = new QLabel(centralwidget);
        sdlp_1->setObjectName("sdlp_1");

        horizontalLayout->addWidget(sdlp_1);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lbls2 = new QLabel(centralwidget);
        lbls2->setObjectName("lbls2");

        horizontalLayout_2->addWidget(lbls2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        servo2 = new QSlider(centralwidget);
        servo2->setObjectName("servo2");
        servo2->setMaximum(180);
        servo2->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_2->addWidget(servo2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        sdlp_2 = new QLabel(centralwidget);
        sdlp_2->setObjectName("sdlp_2");

        horizontalLayout_2->addWidget(sdlp_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lbls3 = new QLabel(centralwidget);
        lbls3->setObjectName("lbls3");

        horizontalLayout_3->addWidget(lbls3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        servo3 = new QSlider(centralwidget);
        servo3->setObjectName("servo3");
        servo3->setMaximum(180);
        servo3->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_3->addWidget(servo3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        sdlp_3 = new QLabel(centralwidget);
        sdlp_3->setObjectName("sdlp_3");

        horizontalLayout_3->addWidget(sdlp_3);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lbls4 = new QLabel(centralwidget);
        lbls4->setObjectName("lbls4");

        horizontalLayout_4->addWidget(lbls4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        servo4 = new QSlider(centralwidget);
        servo4->setObjectName("servo4");
        servo4->setMaximum(180);
        servo4->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_4->addWidget(servo4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        sdlp_4 = new QLabel(centralwidget);
        sdlp_4->setObjectName("sdlp_4");

        horizontalLayout_4->addWidget(sdlp_4);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lbls5 = new QLabel(centralwidget);
        lbls5->setObjectName("lbls5");

        horizontalLayout_5->addWidget(lbls5);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        servo5 = new QSlider(centralwidget);
        servo5->setObjectName("servo5");
        servo5->setMaximum(180);
        servo5->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_5->addWidget(servo5);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        sdlp_5 = new QLabel(centralwidget);
        sdlp_5->setObjectName("sdlp_5");

        horizontalLayout_5->addWidget(sdlp_5);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lblgr = new QLabel(centralwidget);
        lblgr->setObjectName("lblgr");

        horizontalLayout_6->addWidget(lblgr);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        gripper = new QSlider(centralwidget);
        gripper->setObjectName("gripper");
        gripper->setMaximum(180);
        gripper->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_6->addWidget(gripper);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        sdlp_gr = new QLabel(centralwidget);
        sdlp_gr->setObjectName("sdlp_gr");

        horizontalLayout_6->addWidget(sdlp_gr);


        gridLayout->addLayout(horizontalLayout_6, 6, 0, 1, 1);


        horizontalLayout_7->addLayout(gridLayout);

        armRobot->setCentralWidget(centralwidget);
        menubar = new QMenuBar(armRobot);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 632, 25));
        armRobot->setMenuBar(menubar);
        statusbar = new QStatusBar(armRobot);
        statusbar->setObjectName("statusbar");
        armRobot->setStatusBar(statusbar);

        retranslateUi(armRobot);

        QMetaObject::connectSlotsByName(armRobot);
    } // setupUi

    void retranslateUi(QMainWindow *armRobot)
    {
        armRobot->setWindowTitle(QCoreApplication::translate("armRobot", "armRobot", nullptr));
        label_7->setText(QCoreApplication::translate("armRobot", "ROBOT CONTROLLER", nullptr));
        lbls1->setText(QCoreApplication::translate("armRobot", "SERVO 1", nullptr));
        sdlp_1->setText(QCoreApplication::translate("armRobot", "angle value 1", nullptr));
        lbls2->setText(QCoreApplication::translate("armRobot", "SERVO 2", nullptr));
        sdlp_2->setText(QCoreApplication::translate("armRobot", "angle value 2", nullptr));
        lbls3->setText(QCoreApplication::translate("armRobot", "SERVO 3", nullptr));
        sdlp_3->setText(QCoreApplication::translate("armRobot", "angle value 3", nullptr));
        lbls4->setText(QCoreApplication::translate("armRobot", "SERVO 4", nullptr));
        sdlp_4->setText(QCoreApplication::translate("armRobot", "angle value 4", nullptr));
        lbls5->setText(QCoreApplication::translate("armRobot", "SERVO 5", nullptr));
        sdlp_5->setText(QCoreApplication::translate("armRobot", "angle value 5", nullptr));
        lblgr->setText(QCoreApplication::translate("armRobot", "GRIPPER", nullptr));
        sdlp_gr->setText(QCoreApplication::translate("armRobot", "angle value gr", nullptr));
    } // retranslateUi

};

namespace Ui {
    class armRobot: public Ui_armRobot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARMROBOT_H
