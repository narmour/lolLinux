#include "widget.h"
#include "ui_widget.h"
#include <iostream>
#include "statistics.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->searchButton,SIGNAL(clicked()),this,SLOT(searchSummoner()));
}

Widget::~Widget()
{
    delete ui;
}



void Widget::searchSummoner(){
    //auto summonerName = ui->lineEdit->text();

    //start stats page and load up summoner info.
    auto statsPage = new Statistics();
    statsPage->setSummoner(ui->lineEdit->text());

    statsPage->show();

    this->hide();

}
