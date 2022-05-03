#include "analyticgeo1lvl.h"
#include "ui_analyticgeo1lvl.h"

AnalyticGeo1lvl::AnalyticGeo1lvl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnalyticGeo1lvl)
{
    ui->setupUi(this);
    ui->task->setStyleSheet("image:url(:/ag/13.png)");
    ui->answer_1->setText("a1=2; a2=3");
    ui->answer_2->setText("a1=4; a2=6");//
    ui->answer_3->setText("a1=6; a2=4");
    ui->answer_4->setText("a1=3; a2=2");
}

AnalyticGeo1lvl::~AnalyticGeo1lvl()
{
    delete ui;
}

void AnalyticGeo1lvl::on_futher_clicked()
{
    if(ui->task->styleSheet()=="image:url(:/ag/13.png)")
    {if(ui->answer_2->isChecked())
            resultAG1[1]=true;
        else resultAG1[1]=false;
        ui->task->setStyleSheet("image:url(:/ag/19.png)");
        ui->answer_1->setText("3i");
        ui->answer_2->setText("3j");
        ui->answer_3->setText("3k");//
        ui->answer_4->setText("i+j+k");
        k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/ag/19.png)"&&k==1){
        if(ui->answer_3->isChecked())
                    resultAG1[2]=true;
                else resultAG1[2]=false;
                ui->task->setStyleSheet("image:url(:/ag/111.png)");
                ui->answer_1->setText("-15");
                ui->answer_2->setText("-20");
                ui->answer_3->setText("-25");//
                ui->answer_4->setText("-30");
                k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/ag/111.png)"&&k==2){
        if(ui->answer_3->isChecked())
                    resultAG1[3]=true;
                else resultAG1[3]=false;
                ui->task->setStyleSheet("image:url(:/ag/220.png)");
                ui->answer_1->setText("y^2=9x^2");//
                ui->answer_2->setText("9y^2=x^2");
                ui->answer_3->setText("y^2=3x^2");
                ui->answer_4->setText("3y^2=x^2");
                k++;
    }
       else{
            if(ui->answer_1->isChecked())
                resultAG1[4]=true;
            else resultAG1[4]=false;
            AG2.show();
            this->hide();
        }
}

int AnalyticGeo1lvl::getResultAG1(){
    int i=0;
    for(int j=1;j<=4;j++)
        if(resultAG1[j]) i++;
    return i;
}

int AnalyticGeo1lvl::setResultAG2(){
    return AG2.getResultAG2();}
