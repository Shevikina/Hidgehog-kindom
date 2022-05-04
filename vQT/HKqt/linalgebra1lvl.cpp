#include "linalgebra1lvl.h"
#include "ui_linalgebra1lvl.h"

LinAlgebra1lvl::LinAlgebra1lvl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LinAlgebra1lvl)
{
    ui->setupUi(this);
    group->addButton(ui->answer_1);
    group->addButton(ui->answer_2);
    group->addButton(ui->answer_3);
    group->addButton(ui->answer_4);
    ui->task->setStyleSheet("image:url(:/la/77b.png)");
    ui->answer_1->setText("x1=1; x2=2; x3=1;");
    ui->answer_2->setText("x1=2; x2=1; x3=2");
    ui->answer_3->setText("x1=1; x2=2; x3=2");//
    ui->answer_4->setText("x1=2; x2=2; x3=2");
}

LinAlgebra1lvl::~LinAlgebra1lvl()
{
    delete ui;
}

void LinAlgebra1lvl::on_futher_clicked()
{
    if(ui->task->styleSheet()=="image:url(:/la/77c.png)")
    {
        if(ui->answer_1->isChecked())
            resultLA1[2]=true;
        else resultLA1[2]=false;
        LA2.show();
        this->hide();
    }
    else {
        if(ui->answer_3->isChecked())
            resultLA1[1]=true;
        else resultLA1[1]=false;
        setRadioButtonUnchecked();
        ui->task->setStyleSheet("image:url(:/la/77c.png)");
        ui->answer_1->setText("x1=-1; x2=0; x3=1");//
        ui->answer_2->setText("x1=0; x2=0; x3=1");
        ui->answer_3->setText("x1=1; x2=0; x3=-1");
        ui->answer_4->setText("x1=1; x2=0; x3=1");}
}

int LinAlgebra1lvl::getResultLA1(){
    int i=0;
    for(int j=1;j<=2;j++)
        if(resultLA1[j]) i++;
    return i;
}

int LinAlgebra1lvl::setResultLA2(){
    return LA2.getResultLA2()+LA2.setResultLA3();
}

void LinAlgebra1lvl::setRadioButtonUnchecked()
{
    QAbstractButton* checked = group->checkedButton();
    if (checked)
    {
        group->setExclusive(false);
        checked->setChecked(false);
        group->setExclusive(true);
    }
}
