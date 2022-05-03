#ifndef MATHANALYSIS1LVL_H
#define MATHANALYSIS1LVL_H

#include <QWidget>
#include <QMap>
#include "mathanalysus2lvl.h"

namespace Ui {
class MathAnalysis1lvl;
}

class MathAnalysis1lvl : public QWidget
{
    Q_OBJECT

public:
    explicit MathAnalysis1lvl(QWidget *parent = nullptr);
    ~MathAnalysis1lvl();
    MathAnalysus2lvl MA2;
    int getResultMA1();
    int setResultMA2();

private slots:
    void on_futher_clicked();

private:
    Ui::MathAnalysis1lvl *ui;
    QMap<int,bool>resultMA1;
};

#endif // MATHANALYSIS1LVL_H