#ifndef MATHANALYSIS1LVL_H
#define MATHANALYSIS1LVL_H

#include <QWidget>
#include <QMap>
#include <QDebug>
#include <QButtonGroup>//Подключаем библиотеку для объединения QRadioButton в группу
#include "mathanalysus2lvl.h"//подключаем окно второго уровня

namespace Ui {
class MathAnalysis1lvl;
}

class MathAnalysis1lvl : public QWidget
{
    Q_OBJECT

public:
    explicit MathAnalysis1lvl(QWidget *parent = nullptr);
    ~MathAnalysis1lvl();
    MathAnalysus2lvl MA2;//объект класса 2 уровня
    int getResultMA1();//Передача результатов суммы 1, 2 и 3 уровней
    int setResultMA2();//Получения результатов суммы 2 и 3 уровней
    void setRadioButtonUnchecked();//метод для снятия выделения с RadioButton

private slots:
    void on_futher_clicked();

private:
    Ui::MathAnalysis1lvl *ui;
    QMap<int,bool>resultMA1;//QMap, сожержащий результы 1 уровня
    QButtonGroup* group = new QButtonGroup();//
};

#endif // MATHANALYSIS1LVL_H
