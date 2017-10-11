#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QMenu>
#include <QCompleter>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    ui->pushBtn1->setText (tr("&nihao"));
    ui->pushBtn2->setText (tr("帮助(&H)"));
    ui->pushBtn2->setIcon (QIcon("images/help.png"));
    ui->pushBtn3->setText (tr("z&oom"));
    QMenu *menu = new QMenu(this);
    menu->addAction(QIcon("images/zoom-in.png"),tr("放大"));
    ui->pushBtn3->setMenu (menu);

    QValidator *validator = new QIntValidator(100,999,this);
    ui->lineEdit3->setValidator(validator);

    QStringList wordList;
    wordList<<"Qt"<<"Qt Creator"<<tr("你好");
    QCompleter *completer = new QCompleter(wordList,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit4->setCompleter(completer);

    ui->timeEdit->setTime(QTime::currentTime());
    ui->dateEdit->setDate(QDate::currentDate());
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->dateTimeEdit->setDisplayFormat(tr("yyyy年MM月dd日ddd HH时mm分ss秒"));
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushBtn1_toggled(bool checked)
{
    qDebug()<<tr("按钮是否按下:")<<checked;
}

void MyWidget::on_lineEdit2_returnPressed()
{
    ui->lineEdit3->setFocus();
    qDebug()<<ui->lineEdit2->text();
    qDebug()<<ui->lineEdit2->displayText();
}

void MyWidget::on_lineEdit3_returnPressed()
{
    ui->lineEdit4->setFocus();
    qDebug()<<ui->lineEdit3->text();
}

void MyWidget::on_lineEdit4_returnPressed()
{

}
