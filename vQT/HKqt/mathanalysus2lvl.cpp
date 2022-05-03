#include "mathanalysus2lvl.h"
#include "ui_mathanalysus2lvl.h"
#include <QDebug>

MathAnalysus2lvl::MathAnalysus2lvl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MathAnalysus2lvl)
{
    ui->setupUi(this);
    ui->task->setStyleSheet("image:url(:/ma/116.png)");
    ui->answer_1->setText("0");
    ui->answer_2->setText("1");
    ui->answer_3->setText("2");
    ui->answer_4->setText("3");
}

MathAnalysus2lvl::~MathAnalysus2lvl()
{
    delete ui;
}

void MathAnalysus2lvl::on_futher_clicked()
{
    if(ui->task->styleSheet()=="image:url(:/ma/116.png)")
    {
        if(ui->answer_2->isChecked()&&ui->answer_1->isChecked()&&!(ui->answer_3->isChecked())&&!(ui->answer_4->isChecked()))
            resultMA2[1]=true;
        else resultMA2[1]=false;
        ui->answer_1->setChecked(false);
        ui->answer_2->setChecked(false);
        ui->answer_3->setChecked(false);
        ui->answer_4->setChecked(false);
        ui->task->setStyleSheet("image:url(:/ma/190.png)");
        ui->answer_1->setText("0");
        ui->answer_2->setText("2");
        ui->answer_3->setText("-6");
        ui->answer_4->setText("4");
        k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/ma/190.png)"&&k==1)
    {
        if(ui->answer_1->isChecked()&&ui->answer_3->isChecked()&&(ui->answer_4->isChecked())&&!(ui->answer_2->isChecked()))
            resultMA2[2]=true;
        else resultMA2[2]=false;
        ui->answer_1->setChecked(false);
        ui->answer_2->setChecked(false);
        ui->answer_3->setChecked(false);
        ui->answer_4->setChecked(false);
        ui->task->setStyleSheet("image:url(:/ma/419.png)");
        ui->answer_1->setText("0,5");
        ui->answer_2->setText("-2,2");
        ui->answer_3->setText("-0,6");
        ui->answer_4->setText("1,4");
        k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/ma/419.png)"&&k==2)
    {
        if(ui->answer_1->isChecked()&&!(ui->answer_3->isChecked())&&!(ui->answer_4->isChecked())&&!(ui->answer_2->isChecked()))
            resultMA2[3]=true;
        else resultMA2[3]=false;
        ui->answer_1->setChecked(false);
        ui->answer_2->setChecked(false);
        ui->answer_3->setChecked(false);
        ui->answer_4->setChecked(false);
        ui->task->setStyleSheet("image:url(:/ma/438.png)");
        ui->answer_1->setText("1");
        ui->answer_2->setText("2");
        ui->answer_3->setText("-2");
        ui->answer_4->setText("0");
        k++;
    }
    else
    {
        if(ui->answer_3->isChecked()&&!(ui->answer_1->isChecked())&&!(ui->answer_2->isChecked())&&!(ui->answer_4->isChecked()))
            resultMA2[4]=true;
        else resultMA2[4]=false;
        MA3.show();
        this->hide();
        k=0;
    }
    for(int i=1;i<=4;i++)
    qDebug()<<resultMA2[i]<<' ';
    qDebug()<<"\n";
}

int MathAnalysus2lvl::getResultMA2(){
    int i=0;
    for(int j=1;j<=4;j++)
        if(resultMA2[j]) i++;
    return i;
}
int MathAnalysus2lvl::setResultMA3(){
    return MA3.getResultMA3();
}
