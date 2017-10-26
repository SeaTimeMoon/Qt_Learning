#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    ui->lineEdit->hide();
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_toggled(bool checked)
{
    ui->lineEdit->setVisible(checked);
    if(checked)
    {
        ui->pushButton->setText(tr("隐藏可扩展窗口"));
    }
    else
    {
        ui->pushButton->setText(tr("显示可扩展窗口"));
    }
}
