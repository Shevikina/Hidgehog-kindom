#include "linalgebra2lvl.h"
#include "ui_linalgebra2lvl.h"

LinAlgebra2lvl::LinAlgebra2lvl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LinAlgebra2lvl)
{
    ui->setupUi(this);
    ui->task->setStyleSheet("image:url(:/la/5b.png)");
    ui->answer_1->setText("x=1 y=-2");
    ui->answer_2->setText("x=-1 y=2");
    ui->answer_3->setText("x=-1 y=-2");
    ui->answer_4->setText("x=1 y=2");//
}

LinAlgebra2lvl::~LinAlgebra2lvl()
{
    delete ui;
}

void LinAlgebra2lvl::on_futher_clicked()
{
    if(ui->task->styleSheet()=="image:url(:/la/5b.png)")
    {
        if(ui->answer_4->isChecked()&&!(ui->answer_1->isChecked())&&!(ui->answer_2->isChecked())&&!(ui->answer_3->isChecked()))
            resultLA2[1]=true;
        else resultLA2[1]=false;
        ui->answer_1->setChecked(false);
        ui->answer_2->setChecked(false);
        ui->answer_3->setChecked(false);
        ui->answer_4->setChecked(false);
        ui->task->setStyleSheet("image:url(:/la/8a.png)");
        ui->answer_1->setText("3");
        ui->answer_2->setText("-1");//
        ui->answer_3->setText("-2");
        ui->answer_4->setText("4");
        k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/la/8a.png)"&&k==1)
    {
        if(ui->answer_2->isChecked()&&!(ui->answer_1->isChecked())&&!(ui->answer_3->isChecked())&&!(ui->answer_4->isChecked()))
            resultLA2[2]=true;
        else resultLA2[2]=false;
        ui->answer_1->setChecked(false);
        ui->answer_2->setChecked(false);
        ui->answer_3->setChecked(false);
        ui->answer_4->setChecked(false);
        ui->task->setStyleSheet("image:url(:/la/27.png)");
        ui->answer_1->setText("6");//
        ui->answer_2->setText("-3");
        ui->answer_3->setText("-6");//
        ui->answer_4->setText("3");
        k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/la/27.png)"&&k==2)
    {
        if(ui->answer_1->isChecked()&&(ui->answer_3->isChecked())&&!(ui->answer_4->isChecked())&&!(ui->answer_2->isChecked()))
            resultLA2[3]=true;
        else resultLA2[3]=false;
        ui->answer_1->setChecked(false);
        ui->answer_2->setChecked(false);
        ui->answer_3->setChecked(false);
        ui->answer_4->setChecked(false);
        ui->task->setStyleSheet("image:url(:/la/29.png)");
        ui->answer_1->setText("1");
        ui->answer_2->setText("2");
        ui->answer_3->setText("-2");
        ui->answer_4->setText("-3");//
        k++;
    }
    else
    {
        if(ui->answer_4->isChecked()&&!(ui->answer_1->isChecked())&&!(ui->answer_2->isChecked())&&!(ui->answer_3->isChecked()))
            resultLA2[4]=true;
        else resultLA2[4]=false;
        LA3.show();
        this->hide();
        k=0;
    }
    for(int i=1;i<=4;i++)
    qDebug()<<resultLA2[i]<<' ';
    qDebug()<<"\n";

}

int LinAlgebra2lvl::getResultLA2(){
    int i=0;
    for(int j=1;j<=4;j++)
        if(resultLA2[j]) i++;
    return i;
}
int LinAlgebra2lvl::setResultLA3(){
    return LA3.getResultLA3();
}
