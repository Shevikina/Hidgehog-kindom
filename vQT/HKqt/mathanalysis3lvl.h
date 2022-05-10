#ifndef MATHANALYSIS3LVL_H
#define MATHANALYSIS3LVL_H

#include <QWidget>//Подключение библиотеки для изменения картинок внутри виджета
#include <QMap>//Подключение библиотеки для удобного подсчета результатов

namespace Ui {
class MathAnalysis3lvl;
}

class MathAnalysis3lvl : public QWidget
{
    Q_OBJECT

public:
    explicit MathAnalysis3lvl(QWidget *parent = nullptr);
    ~MathAnalysis3lvl();
    int getResultMA3();//подсчет количества правильных ответов в 3 уровне математического анализа

private slots:

    void on_futher_clicked();//обработка нажатия копки "Дальше"

private:
    Ui::MathAnalysis3lvl *ui;
    QMap<int, bool> resultMA3;//результаты 3 уровня математического анализа
};

#endif // MATHANALYSIS3LVL_H
