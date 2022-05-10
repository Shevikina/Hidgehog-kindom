#ifndef SUBJECT_H
#define SUBJECT_H

#include <QWidget>
#include <QString>
#include <QMessageBox>
#include "mathanalysis1lvl.h"//заголовочный файл начального уровня Математического Анализа
#include "linalgebra1lvl.h" //заголовочный файл начального уровня Линейной Алгебры
#include "analyticgeo1lvl.h" //заголовочный файл начального уровня Аналитической Геометрии

namespace Ui {
class Subject;
}

class Subject : public QWidget
{
    Q_OBJECT

public:
    explicit Subject(QWidget *parent = nullptr);
    ~Subject();
    MathAnalysis1lvl MA1;//объект начального уровня Математического Анализа
    LinAlgebra1lvl LA1; //объект начального уровня Линейной Алгебры
    AnalyticGeo1lvl AG1; //объект начального уровня Аналитической Геометрии
    int setResultMA(); //Суммирование баллов за все уровни по Математическому Анализу
    int setResultLA(); //Суммирование баллов за все уровни по Линейной Алгебры
    int setResultAG(); //Суммирование баллов за все уровни по Аналитической Геометрии
    void Result(); //Финальное окно с результатами
    int level=0;//0-начСост, 1-hard, 2-medium, 3-easy

private slots:

    void on_mathAnalysis_clicked();//Обработчик нажатия на кнопку Математический Анализ

    void on_linAlgebra_clicked();//Обработчик нажатия на кнопку Линейная Алгебра

    void on_analyticGeo_clicked();//Обработчик нажатия на кнопку Аналитическая Геометрия

private:
    Ui::Subject *ui;
};

#endif // SUBJECT_H
