#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>

namespace Ui {
class CMainWidget;
}

class CMainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CMainWidget(QWidget *parent = 0);
    ~CMainWidget();

private:
    Ui::CMainWidget *ui;
};

#endif // MAINWIDGET_H
