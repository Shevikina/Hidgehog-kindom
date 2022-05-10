#ifndef MATHANALYSUS2LVL_H
#define MATHANALYSUS2LVL_H

#include <QWidget>//Подключение библиотеки для изменения картинок внутри виджета
#include <QMap>//Подключение библиотеки для удобного подсчета результатов
#include "mathanalysis3lvl.h"//Заголовочный файл 3 уровня по математическому анализу

namespace Ui {
class MathAnalysus2lvl;
}

class MathAnalysus2lvl : public QWidget
{
    Q_OBJECT

public:
    explicit MathAnalysus2lvl(QWidget *parent = nullptr);
    ~MathAnalysus2lvl();
    MathAnalysis3lvl MA3;//Объект для перехода на 3 уровень
    int getResultMA2();//Подсчет правильных ответов на 2 уровне
    int setResultMA3();//Получение результатов за 3 уровень
    void setCheckBoxUnchecked();//метод для снятия выделения с CheckBox

private slots:
    void on_futher_clicked();//Нажатие на кнопку Далее

private:
    Ui::MathAnalysus2lvl *ui;
    QMap<int,bool> resultMA2;//результаты за второй уровень
};

#endif // MATHANALYSUS2LVL_H
