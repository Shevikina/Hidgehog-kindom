#include "analyticgeo3lvl.h"
#include "ui_analyticgeo3lvl.h"

AnalyticGeo3lvl::AnalyticGeo3lvl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnalyticGeo3lvl)
{
    ui->setupUi(this);
}

AnalyticGeo3lvl::~AnalyticGeo3lvl()
{
    delete ui;
}
