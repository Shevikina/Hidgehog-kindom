#ifndef LINALGEBRA3LVL_H
#define LINALGEBRA3LVL_H

#include <QWidget>
#include <QMap>
namespace Ui {
class LinAlgebra3lvl;
}

class LinAlgebra3lvl : public QWidget
{
    Q_OBJECT

public:
    explicit LinAlgebra3lvl(QWidget *parent = nullptr);
    ~LinAlgebra3lvl();
    QMap<int,bool> resultLA3;
    int getResultLA3();

private slots:
    void on_futher_clicked();

private:
    Ui::LinAlgebra3lvl *ui;
};

#endif // LINALGEBRA3LVL_H
