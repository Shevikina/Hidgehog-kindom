#include "analyticgeo2lvl.h"
#include "ui_analyticgeo2lvl.h"

AnalyticGeo2lvl::AnalyticGeo2lvl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnalyticGeo2lvl)
{
    ui->setupUi(this);
    ui->task->setStyleSheet("image:url(:/ag/16.png)");
}

AnalyticGeo2lvl::~AnalyticGeo2lvl()
{
    delete ui;
}

void AnalyticGeo2lvl::on_futher_clicked()
{
    if(ui->task->styleSheet()=="image:url(:/ag/16.png)"){
       if(ui->answer->text()=="16")
        resultAG2[1]=true;
       else  resultAG2[1]=false;
       ui->answer->clear();
       ui->task->setStyleSheet("image:url(:/ag/17.png)");
       k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/ag/17.png)"&&k==1)
    {
        if(ui->answer->text()=="40")
          resultAG2[2]=true;
        else  resultAG2[2]=false;
        ui->answer->clear();
        ui->task->setStyleSheet("image:url(:/ag/114.png)");
        k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/ag/114.png)"&&k==2)
    {
        if(ui->answer->text()=="2")
          resultAG2[3]=true;
        else  resultAG2[3]=false;
        ui->answer->clear();
        ui->task->setStyleSheet("image:url(:/la/24.png)");
        k++;
    }
    else {
        if(ui->answer->text()=="49")
         resultAG2[4]=true;
        else resultAG2[4]=false;
        ui->futher->setText("РЕЗУЛЬТАТ");
        this->close();
        k=0;
    }
}

int AnalyticGeo2lvl::getResultAG2(){
    int i=0;
    for(int j=1;j<=4;j++)
        if(resultAG2[j]) i++;
    return i;}
