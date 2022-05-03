/********************************************************************************
** Form generated from reading UI file 'mathanalysis3lvl.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATHANALYSIS3LVL_H
#define UI_MATHANALYSIS3LVL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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

class Ui_MathAnalysis3lvl
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

    void setupUi(QWidget *MathAnalysis3lvl)
    {
        if (MathAnalysis3lvl->objectName().isEmpty())
            MathAnalysis3lvl->setObjectName(QString::fromUtf8("MathAnalysis3lvl"));
        MathAnalysis3lvl->resize(1366, 768);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/HedgehogGIF.gif"), QSize(), QIcon::Normal, QIcon::Off);
        MathAnalysis3lvl->setWindowIcon(icon);
        gridLayout = new QGridLayout(MathAnalysis3lvl);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        task = new QWidget(MathAnalysis3lvl);
        task->setObjectName(QString::fromUtf8("task"));
        task->setMinimumSize(QSize(0, 150));

        verticalLayout->addWidget(task);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        question = new QLabel(MathAnalysis3lvl);
        question->setObjectName(QString::fromUtf8("question"));

        horizontalLayout_2->addWidget(question);

        answer = new QLineEdit(MathAnalysis3lvl);
        answer->setObjectName(QString::fromUtf8("answer"));

        horizontalLayout_2->addWidget(answer);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        futher = new QPushButton(MathAnalysis3lvl);
        futher->setObjectName(QString::fromUtf8("futher"));

        horizontalLayout->addWidget(futher);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);


        retranslateUi(MathAnalysis3lvl);

        QMetaObject::connectSlotsByName(MathAnalysis3lvl);
    } // setupUi

    void retranslateUi(QWidget *MathAnalysis3lvl)
    {
        MathAnalysis3lvl->setWindowTitle(QCoreApplication::translate("MathAnalysis3lvl", "\320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\220\320\275\320\260\320\273\320\270\320\267", nullptr));
        question->setText(QCoreApplication::translate("MathAnalysis3lvl", "\320\236\320\242\320\222\320\225\320\242", nullptr));
        futher->setText(QCoreApplication::translate("MathAnalysis3lvl", "\320\224\320\220\320\233\320\225\320\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MathAnalysis3lvl: public Ui_MathAnalysis3lvl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATHANALYSIS3LVL_H
