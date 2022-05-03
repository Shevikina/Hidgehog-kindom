/********************************************************************************
** Form generated from reading UI file 'analyticgeo1lvl.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYTICGEO1LVL_H
#define UI_ANALYTICGEO1LVL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalyticGeo1lvl
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *task;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *answer_1;
    QRadioButton *answer_2;
    QRadioButton *answer_3;
    QRadioButton *answer_4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *futher;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AnalyticGeo1lvl)
    {
        if (AnalyticGeo1lvl->objectName().isEmpty())
            AnalyticGeo1lvl->setObjectName(QString::fromUtf8("AnalyticGeo1lvl"));
        AnalyticGeo1lvl->resize(1366, 768);
        gridLayout = new QGridLayout(AnalyticGeo1lvl);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        task = new QWidget(AnalyticGeo1lvl);
        task->setObjectName(QString::fromUtf8("task"));
        task->setMinimumSize(QSize(0, 100));

        verticalLayout_2->addWidget(task);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        answer_1 = new QRadioButton(AnalyticGeo1lvl);
        answer_1->setObjectName(QString::fromUtf8("answer_1"));

        verticalLayout->addWidget(answer_1);

        answer_2 = new QRadioButton(AnalyticGeo1lvl);
        answer_2->setObjectName(QString::fromUtf8("answer_2"));

        verticalLayout->addWidget(answer_2);

        answer_3 = new QRadioButton(AnalyticGeo1lvl);
        answer_3->setObjectName(QString::fromUtf8("answer_3"));

        verticalLayout->addWidget(answer_3);

        answer_4 = new QRadioButton(AnalyticGeo1lvl);
        answer_4->setObjectName(QString::fromUtf8("answer_4"));

        verticalLayout->addWidget(answer_4);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        futher = new QPushButton(AnalyticGeo1lvl);
        futher->setObjectName(QString::fromUtf8("futher"));

        horizontalLayout_4->addWidget(futher);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(AnalyticGeo1lvl);

        QMetaObject::connectSlotsByName(AnalyticGeo1lvl);
    } // setupUi

    void retranslateUi(QWidget *AnalyticGeo1lvl)
    {
        AnalyticGeo1lvl->setWindowTitle(QCoreApplication::translate("AnalyticGeo1lvl", "Form", nullptr));
        answer_1->setText(QCoreApplication::translate("AnalyticGeo1lvl", "RadioButton", nullptr));
        answer_2->setText(QCoreApplication::translate("AnalyticGeo1lvl", "RadioButton", nullptr));
        answer_3->setText(QCoreApplication::translate("AnalyticGeo1lvl", "RadioButton", nullptr));
        answer_4->setText(QCoreApplication::translate("AnalyticGeo1lvl", "RadioButton", nullptr));
        futher->setText(QCoreApplication::translate("AnalyticGeo1lvl", "\320\224\320\220\320\233\320\225\320\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalyticGeo1lvl: public Ui_AnalyticGeo1lvl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYTICGEO1LVL_H
