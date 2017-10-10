#include "mywidget.h"
#include "ui_mywidget.h"
#include<QDialog>
#include<mydialog.h>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
//    QDialog dialog(this);
//    dialog.exec ();

//    QDialog *dialog = new QDialog(this);
//    dialog->setModal (true);
//    dialog->show ();

//    connect (ui->showChildButton,&QPushButton::clicked,this,&MyWidget::showChildDialog);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_showChildButton_clicked()
{
    QDialog *dialog = new QDialog(this);
    dialog->show ();
}

void MyWidget::on_pushButton_clicked()
{
    close();
    MyDialog dlg;
    if(dlg.exec ()==QDialog::Accepted)
    {
        show();
    }
}
