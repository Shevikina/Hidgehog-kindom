#include "mathanalysis1lvl.h"
#include "ui_mathanalysis1lvl.h"


MathAnalysis1lvl::MathAnalysis1lvl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MathAnalysis1lvl)
{
    ui->setupUi(this);
    //добавляем кнопки в группу кнопок
    group->addButton(ui->answer_1);
    group->addButton(ui->answer_2);
    group->addButton(ui->answer_3);
    group->addButton(ui->answer_4);
    group->addButton(ui->answer_5);
    ui->task->setStyleSheet("image:url(:/ma/379.png)");//Устанавливаем первую задачу
    //Устанавливаем варианты ответов в QRadioButton-ы
    ui->answer_1->setText("x=-0,57; y=-1,26");
    ui->answer_2->setText("x=0,99; y=-0,50");//Верный ответ
    ui->answer_3->setText("x=-0,42; y=1,19");
    ui->answer_4->setText("x=0,45; y=0,74");
    ui->answer_5->setText("x=0,54; y=-0,68");
}

MathAnalysis1lvl::~MathAnalysis1lvl()
{
    delete ui;
}

void MathAnalysis1lvl::on_futher_clicked()
{
  if(ui->task->styleSheet()=="image:url(:/ma/379.png)")//Если изображение в QWidget соответствует первому заданию, то переходим ко второму заданию
  {
      if(ui->answer_2->isChecked())//проверяем и запоминаем результаты в QMap
          resultMA1[1]=true;
      else resultMA1[1]=false;
      setRadioButtonUnchecked();
      ui->task->setStyleSheet("image:url(:/ma/380.png)");
      ui->answer_1->setText("x=-1,30; y=9,91");
      ui->answer_2->setText("x=2,3; y=9,73");
      ui->answer_3->setText("x=-0,62; y=-9,98");
      ui->answer_4->setText("x=1,62; y=-9,87");
      ui->answer_5->setText("x=0,1; y=-9,09");//Верный ответ
  }
  else {//Иначе проверяем ответ на второе задание и переходим к следующему уровню
      if(ui->answer_5->isChecked())
          resultMA1[2]=true;
      else resultMA1[2]=false;
      MA2.show();
      this->hide();
  }
  qDebug()<<resultMA1[1]<<" "<<resultMA1[2];
}

int MathAnalysis1lvl::getResultMA1(){//Получаем количество верных результатов за первый уровень
    int i=0;
    for(int j=1;j<=2;j++)
        if(resultMA1[j]) i++;
    return i;
}

int MathAnalysis1lvl::setResultMA2(){//Считаем сумму последнего и предпоследнего уровня
    return MA2.getResultMA2()+MA2.setResultMA3();
}

void MathAnalysis1lvl::setRadioButtonUnchecked(){//Снимаем выделение с группы QRadioButton-ов
    QAbstractButton* checked = group->checkedButton();//Находим из группы какая из кнопок выделена
    if (checked)
    {
        group->setExclusive(false);//убираем правило одного обязательного выделения в группе
        checked->setChecked(false);//убираем само выделение с нужной кнопки
        group->setExclusive(true);//Включаем обратно правило одного обязательного выделения в группе
    }
}
