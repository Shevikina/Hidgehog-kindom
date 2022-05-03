#ifndef MATHANALYSUS2LVL_H
#define MATHANALYSUS2LVL_H

#include <QWidget>
#include <QMap>
#include "mathanalysis3lvl.h"

namespace Ui {
class MathAnalysus2lvl;
}

class MathAnalysus2lvl : public QWidget
{
    Q_OBJECT

public:
    explicit MathAnalysus2lvl(QWidget *parent = nullptr);
    ~MathAnalysus2lvl();
    MathAnalysis3lvl MA3;
    int getResultMA2();
    int setResultMA3();

private slots:
    void on_futher_clicked();

private:
    Ui::MathAnalysus2lvl *ui;
    QMap<int,bool> resultMA2;
    int k=0;
};

#endif // MATHANALYSUS2LVL_H
