#include "linalgebra3lvl.h"
#include "ui_linalgebra3lvl.h"

LinAlgebra3lvl::LinAlgebra3lvl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LinAlgebra3lvl)
{
    ui->setupUi(this);
    ui->task->setStyleSheet("image:url(:/la/8b.png)");
}

LinAlgebra3lvl::~LinAlgebra3lvl()
{
    delete ui;
}

void LinAlgebra3lvl::on_futher_clicked()
{
    if(ui->task->styleSheet()=="image:url(:/la/8b.png)"){
       if(ui->answer->text()=="1")
        resultLA3[1]=true;
       else resultLA3[1]=false;
       ui->answer->clear();
       ui->task->setStyleSheet("image:url(:/la/34a.png)");
       k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/la/34a.png)"&&k==1)
    {
        if(ui->answer->text()=="3")
         resultLA3[2]=true;
        else resultLA3[2]=false;
        ui->answer->clear();
        ui->task->setStyleSheet("image:url(:/la/34b.png)");
        k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/la/34b.png)"&&k==2)
    {
        if(ui->answer->text()=="4")
         resultLA3[3]=true;
        else resultLA3[3]=false;
        ui->answer->clear();
        ui->task->setStyleSheet("image:url(:/la/35a.png)");
        k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/la/35a.png)"&&k==3)
    {
        if(ui->answer->text()=="2")
         resultLA3[4]=true;
        else resultLA3[4]=false;
        ui->answer->clear();
        ui->task->setStyleSheet("image:url(:/la/60c.png)");
        k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/la/60c.png)"&&k==4)
    {
        if(ui->answer->text()=="119")
         resultLA3[5]=true;
        else resultLA3[5]=false;
        ui->answer->clear();
        ui->task->setStyleSheet("image:url(:/la/61e.png)");
        k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/la/61e.png)"&&k==5)
    {
        if(ui->answer->text()=="54")
         resultLA3[6]=true;
        else resultLA3[6]=false;
        ui->answer->clear();
        ui->task->setStyleSheet("image:url(:/la/61i.png)");
        k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/la/61i.png)"&&k==6)
    {
        if(ui->answer->text()=="4")
         resultLA3[7]=true;
        else resultLA3[7]=false;
        ui->answer->clear();
        ui->task->setStyleSheet("image:url(:/la/153.png)");
        k++;
    }
    else if(ui->task->styleSheet()=="image:url(:/la/153.png)"&&k==7)
    {
        if(ui->answer->text()=="7")
         resultLA3[8]=true;
        else resultLA3[8]=false;
        ui->answer->clear();
        ui->task->setStyleSheet("image:url(:/la/154.png)");
        k++;
    }
    else {
        if(ui->answer->text()=="13")
         resultLA3[9]=true;
        else resultLA3[9]=false;
        ui->futher->setText("РЕЗУЛЬТАТ");
        this->close();
        k=0;
    }
}

int LinAlgebra3lvl::getResultLA3(){
    int i=0;
    for(int j=1;j<=9;j++)
        if(resultLA3[j]) i++;
    return i;}
