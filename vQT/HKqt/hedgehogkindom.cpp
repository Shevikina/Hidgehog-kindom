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
    QMessageBox msg;//создаю объект класса QMessageBox для создания окна с сообщением
    msg.setWindowTitle("О создателе");//Задаю заголовок
    msg.setIconPixmap(QPixmap(":/img/Hedgehog.png"));//Задаю картинку рядом с текстом
    msg.setWindowIcon(QIcon(":/img/information.png"));//Задаю иконку рядом с заголовком
    //Задаю тект сообщения:
    msg.setText("Приложение создано:\n"
                "Городнянской Дарьей в качестве курсовой работы\n"
                "На тему:\n\"Реализация базовых математических дисциплин в формате квест-игры\"\n"
                "Особая благодарность за помощь в оформлении приложения Скарга Ксении\n"
                "Вопросы по игре задавать на почту "
                "shevik.art@gmail.com\n"
                "Приятной игры!");
    msg.exec();//Выполняю окно
}


void HedgehogKindom::on_HARD_clicked()
{
    //ui->stackedWidget->addWidget();//как подключить
    s.level=1;//передаю выбранный уровень в класс Subject
    s.show();//перехожу в окно выбора математической дисциплины
    this->hide();
}



void HedgehogKindom::on_MEDIUM_clicked()
{
    s.level=2;
    s.show();
    this->hide();
}
