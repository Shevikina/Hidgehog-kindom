/********************************************************************************
** Form generated from reading UI file 'linalgebra2lvl.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINALGEBRA2LVL_H
#define UI_LINALGEBRA2LVL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinAlgebra2lvl
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *task;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QCheckBox *answer_1;
    QCheckBox *answer_2;
    QCheckBox *answer_3;
    QCheckBox *answer_4;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *futher;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *LinAlgebra2lvl)
    {
        if (LinAlgebra2lvl->objectName().isEmpty())
            LinAlgebra2lvl->setObjectName(QString::fromUtf8("LinAlgebra2lvl"));
        LinAlgebra2lvl->resize(1366, 768);
        gridLayout = new QGridLayout(LinAlgebra2lvl);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        task = new QWidget(LinAlgebra2lvl);
        task->setObjectName(QString::fromUtf8("task"));
        task->setMinimumSize(QSize(0, 150));

        verticalLayout_2->addWidget(task);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        answer_1 = new QCheckBox(LinAlgebra2lvl);
        answer_1->setObjectName(QString::fromUtf8("answer_1"));

        verticalLayout->addWidget(answer_1);

        answer_2 = new QCheckBox(LinAlgebra2lvl);
        answer_2->setObjectName(QString::fromUtf8("answer_2"));

        verticalLayout->addWidget(answer_2);

        answer_3 = new QCheckBox(LinAlgebra2lvl);
        answer_3->setObjectName(QString::fromUtf8("answer_3"));

        verticalLayout->addWidget(answer_3);

        answer_4 = new QCheckBox(LinAlgebra2lvl);
        answer_4->setObjectName(QString::fromUtf8("answer_4"));

        verticalLayout->addWidget(answer_4);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        futher = new QPushButton(LinAlgebra2lvl);
        futher->setObjectName(QString::fromUtf8("futher"));

        horizontalLayout_2->addWidget(futher);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(LinAlgebra2lvl);

        QMetaObject::connectSlotsByName(LinAlgebra2lvl);
    } // setupUi

    void retranslateUi(QWidget *LinAlgebra2lvl)
    {
        LinAlgebra2lvl->setWindowTitle(QCoreApplication::translate("LinAlgebra2lvl", "Form", nullptr));
        answer_1->setText(QCoreApplication::translate("LinAlgebra2lvl", "CheckBox", nullptr));
        answer_2->setText(QCoreApplication::translate("LinAlgebra2lvl", "CheckBox", nullptr));
        answer_3->setText(QCoreApplication::translate("LinAlgebra2lvl", "CheckBox", nullptr));
        answer_4->setText(QCoreApplication::translate("LinAlgebra2lvl", "CheckBox", nullptr));
        futher->setText(QCoreApplication::translate("LinAlgebra2lvl", "\320\224\320\220\320\233\320\225\320\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinAlgebra2lvl: public Ui_LinAlgebra2lvl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINALGEBRA2LVL_H
