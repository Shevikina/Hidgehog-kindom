/********************************************************************************
** Form generated from reading UI file 'mathanalysus2lvl.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATHANALYSUS2LVL_H
#define UI_MATHANALYSUS2LVL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MathAnalysus2lvl
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

    void setupUi(QWidget *MathAnalysus2lvl)
    {
        if (MathAnalysus2lvl->objectName().isEmpty())
            MathAnalysus2lvl->setObjectName(QString::fromUtf8("MathAnalysus2lvl"));
        MathAnalysus2lvl->resize(1366, 768);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/HedgehogGIF.gif"), QSize(), QIcon::Normal, QIcon::Off);
        MathAnalysus2lvl->setWindowIcon(icon);
        gridLayout = new QGridLayout(MathAnalysus2lvl);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        task = new QWidget(MathAnalysus2lvl);
        task->setObjectName(QString::fromUtf8("task"));
        task->setMinimumSize(QSize(0, 150));

        verticalLayout_2->addWidget(task);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        answer_1 = new QCheckBox(MathAnalysus2lvl);
        answer_1->setObjectName(QString::fromUtf8("answer_1"));

        verticalLayout->addWidget(answer_1);

        answer_2 = new QCheckBox(MathAnalysus2lvl);
        answer_2->setObjectName(QString::fromUtf8("answer_2"));

        verticalLayout->addWidget(answer_2);

        answer_3 = new QCheckBox(MathAnalysus2lvl);
        answer_3->setObjectName(QString::fromUtf8("answer_3"));

        verticalLayout->addWidget(answer_3);

        answer_4 = new QCheckBox(MathAnalysus2lvl);
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

        futher = new QPushButton(MathAnalysus2lvl);
        futher->setObjectName(QString::fromUtf8("futher"));

        horizontalLayout_2->addWidget(futher);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(MathAnalysus2lvl);

        QMetaObject::connectSlotsByName(MathAnalysus2lvl);
    } // setupUi

    void retranslateUi(QWidget *MathAnalysus2lvl)
    {
        MathAnalysus2lvl->setWindowTitle(QCoreApplication::translate("MathAnalysus2lvl", "\320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\220\320\275\320\260\320\273\320\270\320\267", nullptr));
        answer_1->setText(QCoreApplication::translate("MathAnalysus2lvl", "CheckBox", nullptr));
        answer_2->setText(QCoreApplication::translate("MathAnalysus2lvl", "CheckBox", nullptr));
        answer_3->setText(QCoreApplication::translate("MathAnalysus2lvl", "CheckBox", nullptr));
        answer_4->setText(QCoreApplication::translate("MathAnalysus2lvl", "CheckBox", nullptr));
        futher->setText(QCoreApplication::translate("MathAnalysus2lvl", "\320\224\320\220\320\233\320\225\320\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MathAnalysus2lvl: public Ui_MathAnalysus2lvl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATHANALYSUS2LVL_H
