#ifndef HEDGEHOGKINDOM_H
#define HEDGEHOGKINDOM_H

#include <QMainWindow>
#include <QMessageBox>
#include "subject.h"

QT_BEGIN_NAMESPACE
namespace Ui { class HedgehogKindom; }
QT_END_NAMESPACE

class HedgehogKindom : public QMainWindow
{
    Q_OBJECT

public:
    HedgehogKindom(QWidget *parent = nullptr);
    ~HedgehogKindom();
    Subject s;
    int getLevel();

private slots:

    void on_information_clicked();

    void on_HARD_clicked();

    void on_MEDIUM_clicked();

    void on_EASY_clicked();

private:
    Ui::HedgehogKindom *ui;
     int level=0;//0-начСост, 1-hard, 2-medium, 3-easy
};
#endif // HEDGEHOGKINDOM_H
