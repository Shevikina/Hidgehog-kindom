#ifndef LINALGEBRA2LVL_H
#define LINALGEBRA2LVL_H

#include <QWidget>
#include <QMap>
#include "linalgebra3lvl.h"

namespace Ui {
class LinAlgebra2lvl;
}

class LinAlgebra2lvl : public QWidget
{
    Q_OBJECT

public:
    explicit LinAlgebra2lvl(QWidget *parent = nullptr);
    ~LinAlgebra2lvl();
    LinAlgebra3lvl LA3;
    int getResultLA2();
    int setResultLA3();
    void setCheckBoxUnchecked();//метод для снятия выделения с CheckBox

private slots:
    void on_futher_clicked();

private:
    Ui::LinAlgebra2lvl *ui;
    QMap<int,bool> resultLA2;
};

#endif // LINALGEBRA2LVL_H
