#include "mathanalysis3lvl.h"
#include "ui_mathanalysis3lvl.h"

MathAnalysis3lvl::MathAnalysis3lvl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MathAnalysis3lvl)
{
    ui->setupUi(this);
    ui->task->setStyleSheet("image:url(:/ma/46.png)");
}

MathAnalysis3lvl::~MathAnalysis3lvl()
{
    delete ui;
}


int MathAnalysis3lvl::getResultMA3(){
    int i=0;
    for(int j=1;j<=6;j++)
        if(resultMA3[j]) i++;
    return i;}

void MathAnalysis3lvl::on_futher_clicked()
{
    if(ui->task->styleSheet()=="image:url(:/ma/46.png)"){
       if(ui->answer->text()=="0")
        resultMA3[1]=true;
       else resultMA3[1]=false;
       ui->answer->clear();
       ui->task->setStyleSheet("image:url(:/ma/47.png)");
    }
    else if(ui->task->styleSheet()=="image:url(:/ma/47.png)")
    {
        if(ui->answer->text()=="0")
         resultMA3[2]=true;
        else resultMA3[2]=false;
        ui->answer->clear();
        ui->task->setStyleSheet("image:url(:/ma/48.png)");
    }
    else if(ui->task->styleSheet()=="image:url(:/ma/48.png)")
    {
        if(ui->answer->text()=="0")
         resultMA3[3]=true;
        else resultMA3[3]=false;
        ui->answer->clear();
        ui->task->setStyleSheet("image:url(:/ma/420.png)");
    }
    else if(ui->task->styleSheet()=="image:url(:/ma/420.png)")
    {
        if(ui->answer->text()=="1")
         resultMA3[4]=true;
        else resultMA3[4]=false;
        ui->answer->clear();
        ui->task->setStyleSheet("image:url(:/ma/433.png)");
    }
    else if(ui->task->styleSheet()=="image:url(:/ma/433.png)")
    {
        if(ui->answer->text()=="3")
         resultMA3[5]=true;
        else resultMA3[5]=false;
        ui->answer->clear();
        ui->task->setStyleSheet("image:url(:/ma/462.png)");
        ui->futher->setText("РЕЗУЛЬТАТ");
    }
    else {
        if(ui->answer->text()=="2")
         resultMA3[6]=true;
        else resultMA3[6]=false;
        this->close();
    }
}

