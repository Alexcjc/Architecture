#include "mainwidget.h"
#include "ui_mainwidget.h"

CMainWidget::CMainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CMainWidget)
{
    ui->setupUi(this);
}

CMainWidget::~CMainWidget()
{
    delete ui;
}
