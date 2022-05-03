/********************************************************************************
** Form generated from reading UI file 'mathanalysis1lvl.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATHANALYSIS1LVL_H
#define UI_MATHANALYSIS1LVL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MathAnalysis1lvl
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *question;
    QSpacerItem *horizontalSpacer_2;
    QWidget *task;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *answer_1;
    QRadioButton *answer_2;
    QRadioButton *answer_3;
    QRadioButton *answer_4;
    QRadioButton *answer_5;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *futher;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MathAnalysis1lvl)
    {
        if (MathAnalysis1lvl->objectName().isEmpty())
            MathAnalysis1lvl->setObjectName(QString::fromUtf8("MathAnalysis1lvl"));
        MathAnalysis1lvl->resize(1366, 768);
        gridLayout = new QGridLayout(MathAnalysis1lvl);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        question = new QLabel(MathAnalysis1lvl);
        question->setObjectName(QString::fromUtf8("question"));

        horizontalLayout_2->addWidget(question);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        task = new QWidget(MathAnalysis1lvl);
        task->setObjectName(QString::fromUtf8("task"));
        task->setMinimumSize(QSize(0, 100));

        verticalLayout_2->addWidget(task);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        answer_1 = new QRadioButton(MathAnalysis1lvl);
        answer_1->setObjectName(QString::fromUtf8("answer_1"));

        verticalLayout->addWidget(answer_1);

        answer_2 = new QRadioButton(MathAnalysis1lvl);
        answer_2->setObjectName(QString::fromUtf8("answer_2"));

        verticalLayout->addWidget(answer_2);

        answer_3 = new QRadioButton(MathAnalysis1lvl);
        answer_3->setObjectName(QString::fromUtf8("answer_3"));

        verticalLayout->addWidget(answer_3);

        answer_4 = new QRadioButton(MathAnalysis1lvl);
        answer_4->setObjectName(QString::fromUtf8("answer_4"));

        verticalLayout->addWidget(answer_4);

        answer_5 = new QRadioButton(MathAnalysis1lvl);
        answer_5->setObjectName(QString::fromUtf8("answer_5"));

        verticalLayout->addWidget(answer_5);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        futher = new QPushButton(MathAnalysis1lvl);
        futher->setObjectName(QString::fromUtf8("futher"));

        horizontalLayout_4->addWidget(futher);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(MathAnalysis1lvl);

        QMetaObject::connectSlotsByName(MathAnalysis1lvl);
    } // setupUi

    void retranslateUi(QWidget *MathAnalysis1lvl)
    {
        MathAnalysis1lvl->setWindowTitle(QCoreApplication::translate("MathAnalysis1lvl", "Form", nullptr));
        question->setText(QCoreApplication::translate("MathAnalysis1lvl", "\320\223\321\200\320\260\321\204\320\270\321\207\320\265\321\201\320\272\320\270 \321\200\320\265\321\210\320\270\321\202\320\265 \321\201\320\270\321\201\321\202\320\265\320\274\321\203 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\271. \320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 1 \320\276\321\202\320\262\320\265\321\202 \320\275\320\265 \321\217\320\262\320\273\321\217\321\216\321\211\320\270\320\271\321\201\321\217 \321\200\320\265\321\210\320\265\320\275\320\270\320\265\320\274", nullptr));
        answer_1->setText(QCoreApplication::translate("MathAnalysis1lvl", "RadioButton", nullptr));
        answer_2->setText(QCoreApplication::translate("MathAnalysis1lvl", "RadioButton", nullptr));
        answer_3->setText(QCoreApplication::translate("MathAnalysis1lvl", "RadioButton", nullptr));
        answer_4->setText(QCoreApplication::translate("MathAnalysis1lvl", "RadioButton", nullptr));
        answer_5->setText(QCoreApplication::translate("MathAnalysis1lvl", "RadioButton", nullptr));
        futher->setText(QCoreApplication::translate("MathAnalysis1lvl", "\320\224\320\220\320\233\320\225\320\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MathAnalysis1lvl: public Ui_MathAnalysis1lvl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATHANALYSIS1LVL_H
