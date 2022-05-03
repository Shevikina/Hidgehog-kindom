#ifndef SUBJECT_H
#define SUBJECT_H

#include <QWidget>
#include "mathanalysis1lvl.h"
#include "linalgebra1lvl.h"
#include "analyticgeo1lvl.h"

namespace Ui {
class Subject;
}

class Subject : public QWidget
{
    Q_OBJECT

public:
    explicit Subject(QWidget *parent = nullptr);
    ~Subject();
    MathAnalysis1lvl MA1;
    LinAlgebra1lvl LA1;
    AnalyticGeo1lvl AG1;
    int getSubj();
    int setResultMA();
    int setResultLA();
    int setResultAG();
    void Result();

private slots:
    void on_back_clicked();

    void on_mathAnalysis_clicked();

    void on_linAlgebra_clicked();

    void on_analyticGeo_clicked();

private:
    Ui::Subject *ui;
    int subj=0;//1-матан,2-линал,3-геометрия
};

#endif // SUBJECT_H
