#ifndef MATHANALYSIS3LVL_H
#define MATHANALYSIS3LVL_H

#include <QWidget>
#include <QMap>
#include <QMessageBox>

namespace Ui {
class MathAnalysis3lvl;
}

class MathAnalysis3lvl : public QWidget
{
    Q_OBJECT

public:
    explicit MathAnalysis3lvl(QWidget *parent = nullptr);
    ~MathAnalysis3lvl();
    int getResultMA3();

private slots:

    void on_futher_clicked();

private:
    Ui::MathAnalysis3lvl *ui;
    QMap<int, bool> resultMA3;
    int k=0;
};

#endif // MATHANALYSIS3LVL_H
