#ifndef SUMMONER_H
#define SUMMONER_H
#include <iostream>
#include <sstream>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <QString>


class Summoner
{
public:
    Summoner(QString name);
    QString getSummonerID();


private:
    QString summonerName,summonerID;
    void setSummonerID();

};

#endif // SUMMONER_H
