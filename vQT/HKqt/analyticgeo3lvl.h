ifndef ANALYTICGEO3LVL_H
#define ANALYTICGEO3LVL_H

#include <QWidget>

namespace Ui {
class AnalyticGeo3lvl;
}

class AnalyticGeo3lvl : public QWidget
{
    Q_OBJECT

public:
    explicit AnalyticGeo3lvl(QWidget *parent = nullptr);
    ~AnalyticGeo3lvl();

private:
    Ui::AnalyticGeo3lvl *ui;
};

#endif // ANALYTICGEO3LVL_H
