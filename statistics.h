#ifndef STATISTICS_H
#define STATISTICS_H

#include <QTabWidget>
#include <QString>
#include "summoner.h"
namespace Ui {
class Statistics;
}

class Statistics : public QTabWidget
{
    Q_OBJECT

public:
    explicit Statistics(QWidget *parent = 0);
    ~Statistics();

    void setSummoner(QString name);

private:
    Ui::Statistics *ui;
    Summoner *currentSummoner;
};

#endif // STATISTICS_H
