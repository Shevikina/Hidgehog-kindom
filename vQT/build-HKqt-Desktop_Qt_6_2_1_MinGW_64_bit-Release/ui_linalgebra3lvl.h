/********************************************************************************
** Form generated from reading UI file 'linalgebra3lvl.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINALGEBRA3LVL_H
#define UI_LINALGEBRA3LVL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinAlgebra3lvl
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QWidget *task;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *question;
    QLineEdit *answer;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *futher;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *LinAlgebra3lvl)
    {
        if (LinAlgebra3lvl->objectName().isEmpty())
            LinAlgebra3lvl->setObjectName(QString::fromUtf8("LinAlgebra3lvl"));
        LinAlgebra3lvl->resize(1366, 768);
        gridLayout = new QGridLayout(LinAlgebra3lvl);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        task = new QWidget(LinAlgebra3lvl);
        task->setObjectName(QString::fromUtf8("task"));
        task->setMinimumSize(QSize(0, 150));

        verticalLayout->addWidget(task);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        question = new QLabel(LinAlgebra3lvl);
        question->setObjectName(QString::fromUtf8("question"));

        horizontalLayout_2->addWidget(question);

        answer = new QLineEdit(LinAlgebra3lvl);
        answer->setObjectName(QString::fromUtf8("answer"));

        horizontalLayout_2->addWidget(answer);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        futher = new QPushButton(LinAlgebra3lvl);
        futher->setObjectName(QString::fromUtf8("futher"));

        horizontalLayout->addWidget(futher);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 366, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);


        retranslateUi(LinAlgebra3lvl);

        QMetaObject::connectSlotsByName(LinAlgebra3lvl);
    } // setupUi

    void retranslateUi(QWidget *LinAlgebra3lvl)
    {
        LinAlgebra3lvl->setWindowTitle(QCoreApplication::translate("LinAlgebra3lvl", "Form", nullptr));
        question->setText(QCoreApplication::translate("LinAlgebra3lvl", "\320\236\320\242\320\222\320\225\320\242", nullptr));
        futher->setText(QCoreApplication::translate("LinAlgebra3lvl", "\320\224\320\220\320\233\320\225\320\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinAlgebra3lvl: public Ui_LinAlgebra3lvl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINALGEBRA3LVL_H
