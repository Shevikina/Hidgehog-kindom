#include "subject.h"
#include "ui_subject.h"
#include <QString>


Subject::Subject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Subject)
{
    ui->setupUi(this);
}

Subject::~Subject()
{
    Result();
    delete ui;
}

void Subject::on_back_clicked()
{

    this->close();

}


void Subject::on_mathAnalysis_clicked()
{
    subj=1;
    MA1.show();
    this->hide();
}


void Subject::on_linAlgebra_clicked()
{
    subj=2;
    LA1.show();
    this->hide();
}


void Subject::on_analyticGeo_clicked()
{
    subj=3;
    AG1.show();
    this->hide();
}

int Subject::getSubj(){
    return subj;
}

int Subject::setResultMA(){
    return MA1.setResultMA2()+MA1.getResultMA1();}
int Subject::setResultLA(){
    return LA1.setResultLA2()+LA1.getResultLA1();}
int Subject::setResultAG(){
    return AG1.setResultAG2()+AG1.getResultAG1();}

void Subject::Result(){
    QMessageBox msg;
    msg.setWindowTitle("Результат");
    msg.setWindowIcon(QIcon("url:(:/img/Hedgehog.png)"));
    if(setResultMA()!=0) msg.setText(QString("Ваш результат:\n%1 баллов по Математическому Анализу!\nТак держать!").arg(setResultMA()));
    else if(setResultLA()!=0) msg.setText(QString("Ваш результат:\n%1 баллов по Линейной Алгебре!\nШикарно!").arg(setResultLA()));
    else if(setResultAG()!=0) msg.setText(QString("Ваш результат:\n%1 баллов по Аналитической Геометрии!\nКруть!").arg(setResultAG()));
    else msg.setText(QString("К сожалению, ваши результаты пусты."));
    msg.exec();
}
