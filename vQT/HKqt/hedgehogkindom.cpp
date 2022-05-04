#include "hedgehogkindom.h"
#include "ui_hedgehogkindom.h"

HedgehogKindom::HedgehogKindom(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HedgehogKindom)
{
    ui->setupUi(this);
    //ui->stackedWidget->addWidget(ui->firstWidget);//если добавляю эту строку- просто не открывается окно. Без ошибок, без чего-либо, оно просто не запускаектся

}

HedgehogKindom::~HedgehogKindom()
{
    delete ui;
}


void HedgehogKindom::on_information_clicked()
{
    QMessageBox msg;
    msg.setWindowTitle("О создателе");
    msg.setWindowIcon(QIcon("url:(:/img/Hedgehog.png)"));
    msg.setText("Приложение создано:\n"
                "Городнянской Дарьей в качестве курсовой работы\n"
                "На тему:\n\"Реализация простейших математических операций в формате квест-игры\"\n"
                "Особая благодарность за помощь в оформлении приложения Скарга Ксении\n"
                "Вопросы по игре задавать на почту "
                "shevik.art@gmail.com\n"
                "Приятной игры!");
    msg.exec();
}


void HedgehogKindom::on_HARD_clicked()
{
    level=1;
    //ui->stackedWidget->addWidget();//как подключить
    s.show();
    this->hide();
}



void HedgehogKindom::on_MEDIUM_clicked()
{
    level=2;
    s.show();
    this->hide();
}


void HedgehogKindom::on_EASY_clicked()
{
    level=3;
    s.show();
    this->hide();
}

int HedgehogKindom::getLevel()
{return level;}
