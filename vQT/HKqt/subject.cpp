#include "subject.h"
#include "ui_subject.h"

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


void Subject::on_mathAnalysis_clicked()
{
    if(level>1){
        QMessageBox msg;
        msg.setWindowTitle("Теория математического анализа");
        msg.setWindowIcon(QIcon(":/img/Hedgehog.png"));
        msg.setText("В основу этих задач был взят учебник советского математика и педагога Бориса Павловича Демидовича.\n"
                    "Основную теорию для успешного прохождения уровня вы можете изучить в его книге \"Сборник задач и упражнений по математическому анализу\"\n"
                    "Для более глубокого изучения теории также советуем 1 Том книги \"Курс Математического Анализа\" за авторством Кудрявцева Льва Дмитриевича\n"
                    "Удачного прохождения уровня!");
        msg.exec();}
    MA1.show();
    this->hide();
}


void Subject::on_linAlgebra_clicked()
{
    if(level>1){
        QMessageBox msg;
        msg.setWindowTitle("Теория линейной алгебры");
        msg.setWindowIcon(QIcon(":/img/Hedgehog.png"));
        msg.setText("В основу этих задач был взят учебник советского математика Игоря Владимировича Проскурякова.\n"
                    "Основную теорию для успешного прохождения уровня вы можете изучить в его книге \"СБОРНИК ЗАДАЧ ПО ЛИНЕЙНОЙ АЛГЕБРЕ\"\n"
                    "Также полезной для изучения затронутых тем будет \"СБОРНИК ЗАДАЧ ПО ЛИНЕЙНОЙ АЛГЕБРЕ\" старшего преподавателя КФУ Гиниятовой Динары Халиловны"
                    "Для более глубокого изучения теории: Книга \"Курс Высшей алгебры\" за авторством Куроша Александра Геннадьевича\n"
                    "Удачного прохождения уровня!");
        msg.exec();}
    LA1.show();
    this->hide();
}


void Subject::on_analyticGeo_clicked()
{
    if(level>1){
        QMessageBox msg;
        msg.setWindowTitle("Теория аналитической геометрии");
        msg.setWindowIcon(QIcon(":/img/Hedgehog.png"));
        msg.setText("В основу этих задач был взят учебник профессора Алексея Адамовича Гусак.\n"
                    "Основную теорию для успешного прохождения уровня вы можете изучить в первой части его книги \"Задачи и упражнения по высшей математике в двух частях.\"\n"
                    "Для более глубокого изучения теории также советуем его \"Пособие к решению задач по высшей математике\"\n"
                    "Удачного прохождения уровня!");
        msg.exec();}
    AG1.show();
    this->hide();
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
    msg.setWindowIcon(QIcon(":/img/Hedgehog.png"));
    QString strLvl;
    if(level==1) strLvl="Тяжелый";
    else strLvl="Средний";
    if(setResultMA()!=0) msg.setText(QString("Ваш уровень сложности был %1\nА ваш результат поражает:\n%2 баллов по Математическому Анализу!\nТак держать!").arg(strLvl).arg(setResultMA()));
    else if(setResultLA()!=0) msg.setText(QString("Ваш уровень сложности был %1\nА ваш результат воодушевляет:\n%2 баллов по Линейной Алгебре!\nШикарно!").arg(strLvl).arg(setResultLA()));
    else if(setResultAG()!=0) msg.setText(QString("Ваш уровень сложности был %1\nА ваш результат восхищает:\n%2 баллов по Аналитической Геометрии!\nКруть!").arg(strLvl).arg(setResultAG()));
    else msg.setText(QString("К сожалению, ваши результаты пусты."));
    msg.exec();
}
