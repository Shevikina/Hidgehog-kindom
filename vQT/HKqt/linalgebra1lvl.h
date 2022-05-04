#ifndef LINALGEBRA1LVL_H
#define LINALGEBRA1LVL_H
#include <QMap>
#include "linalgebra2lvl.h"
#include <QWidget>
#include <QButtonGroup>

namespace Ui {
class LinAlgebra1lvl;
}

class LinAlgebra1lvl : public QWidget
{
    Q_OBJECT

public:
    explicit LinAlgebra1lvl(QWidget *parent = nullptr);
    ~LinAlgebra1lvl();
    LinAlgebra2lvl LA2;
    int getResultLA1();
    int setResultLA2();
    void setRadioButtonUnchecked();

private slots:
    void on_futher_clicked();

private:
    Ui::LinAlgebra1lvl *ui;
    QMap<int,bool> resultLA1;
    QButtonGroup* group = new QButtonGroup();
};

#endif // LINALGEBRA1LVL_H
