#ifndef ANALYTICGEO1LVL_H
#define ANALYTICGEO1LVL_H

#include <QWidget>
#include <QMap>
#include "analyticgeo2lvl.h"

namespace Ui {
class AnalyticGeo1lvl;
}

class AnalyticGeo1lvl : public QWidget
{
    Q_OBJECT

public:
    explicit AnalyticGeo1lvl(QWidget *parent = nullptr);
    ~AnalyticGeo1lvl();
    AnalyticGeo2lvl AG2;
   int getResultAG1();
   int setResultAG2();

private slots:
    void on_futher_clicked();

private:
    Ui::AnalyticGeo1lvl *ui;
    int k=0;
    QMap<int,bool> resultAG1;
};

#endif // ANALYTICGEO1LVL_H
