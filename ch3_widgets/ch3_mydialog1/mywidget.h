#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

 public slots:
    void on_showChildButton_clicked();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MyWidget *ui;
};

#endif // MYWIDGET_H
