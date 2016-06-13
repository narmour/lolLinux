#include "statistics.h"
#include "ui_statistics.h"

Statistics::Statistics(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::Statistics)
{
    ui->setupUi(this);

}

Statistics::~Statistics()
{
    delete ui;
}

void Statistics::setSummoner(QString name){
     currentSummoner = new Summoner(name);
     ui->summonerID->setText(currentSummoner->getSummonerID());
     ui->summonerName->setText(name);
}
