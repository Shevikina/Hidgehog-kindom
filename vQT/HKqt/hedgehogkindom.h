#ifndef HEDGEHOGKINDOM_H
#define HEDGEHOGKINDOM_H

#include <QMainWindow>
#include <QMessageBox>
#include "subject.h"//подключаем заголовочный файл окна с выбором математической дисциплины

QT_BEGIN_NAMESPACE
namespace Ui { class HedgehogKindom; }
QT_END_NAMESPACE

class HedgehogKindom : public QMainWindow
{
    Q_OBJECT

public:
    HedgehogKindom(QWidget *parent = nullptr);
    ~HedgehogKindom();
    Subject s;//объект класса окна с выбором математической дисциплины

private slots:

    void on_information_clicked();//обработка нажатия на кнопку информации

    void on_HARD_clicked();//обработка нажатия на кнопку Тяжелой сложности

    void on_MEDIUM_clicked();//обработка нажатия на кнопку Средней сложности

private:
    Ui::HedgehogKindom *ui;
};
#endif // HEDGEHOGKINDOM_H
