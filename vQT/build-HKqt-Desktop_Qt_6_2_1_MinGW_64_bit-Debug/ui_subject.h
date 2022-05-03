/********************************************************************************
** Form generated from reading UI file 'subject.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECT_H
#define UI_SUBJECT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Subject
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *choiseSub;
    QSpacerItem *verticalSpacer;
    QPushButton *mathAnalysis;
    QPushButton *linAlgebra;
    QPushButton *analyticGeo;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Subject)
    {
        if (Subject->objectName().isEmpty())
            Subject->setObjectName(QString::fromUtf8("Subject"));
        Subject->resize(1366, 768);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/HedgehogGIF.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Subject->setWindowIcon(icon);
        gridLayout = new QGridLayout(Subject);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        choiseSub = new QLabel(Subject);
        choiseSub->setObjectName(QString::fromUtf8("choiseSub"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Fixedsys")});
        font.setPointSize(11);
        choiseSub->setFont(font);
        choiseSub->setAutoFillBackground(false);
        choiseSub->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(choiseSub);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        mathAnalysis = new QPushButton(Subject);
        mathAnalysis->setObjectName(QString::fromUtf8("mathAnalysis"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Fixedsys")});
        mathAnalysis->setFont(font1);
        mathAnalysis->setIconSize(QSize(210, 53));

        verticalLayout_3->addWidget(mathAnalysis);

        linAlgebra = new QPushButton(Subject);
        linAlgebra->setObjectName(QString::fromUtf8("linAlgebra"));
        linAlgebra->setFont(font1);
        linAlgebra->setIconSize(QSize(210, 53));

        verticalLayout_3->addWidget(linAlgebra);

        analyticGeo = new QPushButton(Subject);
        analyticGeo->setObjectName(QString::fromUtf8("analyticGeo"));
        analyticGeo->setFont(font1);
        analyticGeo->setIconSize(QSize(210, 53));

        verticalLayout_3->addWidget(analyticGeo);


        horizontalLayout_10->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_10);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        back = new QPushButton(Subject);
        back->setObjectName(QString::fromUtf8("back"));
        back->setFont(font1);

        horizontalLayout->addWidget(back);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Subject);

        QMetaObject::connectSlotsByName(Subject);
    } // setupUi

    void retranslateUi(QWidget *Subject)
    {
        Subject->setWindowTitle(QCoreApplication::translate("Subject", "Hedgehog Kindom", nullptr));
        choiseSub->setText(QCoreApplication::translate("Subject", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        mathAnalysis->setText(QCoreApplication::translate("Subject", "\320\234\320\220\320\242\320\225\320\234\320\220\320\242\320\230\320\247\320\225\320\241\320\232\320\230\320\231 \320\220\320\235\320\220\320\233\320\230\320\227", nullptr));
        linAlgebra->setText(QCoreApplication::translate("Subject", "\320\233\320\230\320\235\320\225\320\231\320\235\320\220\320\257 \320\220\320\233\320\223\320\225\320\221\320\240\320\220", nullptr));
        analyticGeo->setText(QCoreApplication::translate("Subject", "\320\220\320\235\320\220\320\233\320\230\320\242\320\230\320\247\320\225\320\241\320\232\320\220\320\257 \320\223\320\225\320\236\320\234\320\225\320\242\320\240\320\230\320\257", nullptr));
        back->setText(QCoreApplication::translate("Subject", "\320\222\320\253\320\231\320\242\320\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Subject: public Ui_Subject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECT_H
