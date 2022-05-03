#ifndef ANALYTICGEO2LVL_H
#define ANALYTICGEO2LVL_H

#include <QWidget>
#include <QMap>

namespace Ui {
class AnalyticGeo2lvl;
}

class AnalyticGeo2lvl : public QWidget
{
    Q_OBJECT

public:
    explicit AnalyticGeo2lvl(QWidget *parent = nullptr);
    ~AnalyticGeo2lvl();
    int getResultAG2();

private slots:
    void on_futher_clicked();

private:
    Ui::AnalyticGeo2lvl *ui;
    int k=0;
    QMap<int,bool> resultAG2;
};

#endif // ANALYTICGEO2LVL_H
