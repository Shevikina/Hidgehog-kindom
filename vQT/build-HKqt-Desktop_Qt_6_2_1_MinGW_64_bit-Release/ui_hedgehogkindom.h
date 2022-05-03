/********************************************************************************
** Form generated from reading UI file 'hedgehogkindom.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEDGEHOGKINDOM_H
#define UI_HEDGEHOGKINDOM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HedgehogKindom
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *choise;
    QSpacerItem *verticalSpacer;
    QPushButton *HARD;
    QPushButton *MEDIUM;
    QPushButton *EASY;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *information;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HedgehogKindom)
    {
        if (HedgehogKindom->objectName().isEmpty())
            HedgehogKindom->setObjectName(QString::fromUtf8("HedgehogKindom"));
        HedgehogKindom->resize(1366, 768);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../spriteForCoursWork/pngFile/Hedgehog.png"), QSize(), QIcon::Normal, QIcon::Off);
        HedgehogKindom->setWindowIcon(icon);
        centralwidget = new QWidget(HedgehogKindom);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        choise = new QLabel(centralwidget);
        choise->setObjectName(QString::fromUtf8("choise"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Fixedsys")});
        font.setPointSize(11);
        choise->setFont(font);
        choise->setAutoFillBackground(false);
        choise->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(choise);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        HARD = new QPushButton(centralwidget);
        HARD->setObjectName(QString::fromUtf8("HARD"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("img/backgrount_button_hard.png"), QSize(), QIcon::Normal, QIcon::Off);
        HARD->setIcon(icon1);
        HARD->setIconSize(QSize(210, 53));

        verticalLayout_3->addWidget(HARD);

        MEDIUM = new QPushButton(centralwidget);
        MEDIUM->setObjectName(QString::fromUtf8("MEDIUM"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("img/backgrount_button_medium.png"), QSize(), QIcon::Normal, QIcon::Off);
        MEDIUM->setIcon(icon2);
        MEDIUM->setIconSize(QSize(210, 53));

        verticalLayout_3->addWidget(MEDIUM);

        EASY = new QPushButton(centralwidget);
        EASY->setObjectName(QString::fromUtf8("EASY"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("img/backgrount_button_easy.png"), QSize(), QIcon::Normal, QIcon::Off);
        EASY->setIcon(icon3);
        EASY->setIconSize(QSize(210, 53));

        verticalLayout_3->addWidget(EASY);


        horizontalLayout_10->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_10);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        information = new QPushButton(centralwidget);
        information->setObjectName(QString::fromUtf8("information"));
        information->setEnabled(true);
        information->setMinimumSize(QSize(70, 70));
        information->setIconSize(QSize(40, 40));

        horizontalLayout_6->addWidget(information);


        verticalLayout->addLayout(horizontalLayout_6);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        HedgehogKindom->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HedgehogKindom);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1366, 25));
        HedgehogKindom->setMenuBar(menubar);
        statusbar = new QStatusBar(HedgehogKindom);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HedgehogKindom->setStatusBar(statusbar);

        retranslateUi(HedgehogKindom);

        QMetaObject::connectSlotsByName(HedgehogKindom);
    } // setupUi

    void retranslateUi(QMainWindow *HedgehogKindom)
    {
        HedgehogKindom->setWindowTitle(QCoreApplication::translate("HedgehogKindom", "Hedgehog Kindom", nullptr));
        choise->setText(QCoreApplication::translate("HedgehogKindom", "\320\222\321\213\320\261\320\276\321\200 \321\203\321\200\320\276\320\262\320\275\321\217 \321\201\320\273\320\276\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        HARD->setText(QString());
        MEDIUM->setText(QString());
        EASY->setText(QString());
        information->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HedgehogKindom: public Ui_HedgehogKindom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEDGEHOGKINDOM_H
