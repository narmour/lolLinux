#include "summoner.h"

using namespace curlpp::options;
const std::string key = "03c8f9d3-d619-4593-ad25-6bdfe94517c1";

Summoner::Summoner(QString name)
{
    //set summoner name and get summonerID
        summonerName = name;
        setSummonerID();

}

void Summoner::setSummonerID(){
    //save string into stringstream
    std::stringstream ss;
    ss <<curlpp::options::Url("https://na.api.pvp.net/api/lol/na/v1.4/summoner/by-name/"+summonerName.toStdString()+"?api_key="+key);
    std::string callback = ss.str();
    //extract and set summoner id
    std::string find = "\"id\":";
    size_t idx = callback.find(find)+find.length();
    //return SID
    summonerID =QString::fromStdString(callback.substr(idx,callback.find(',')-idx));

}

QString Summoner::getSummonerID(){
    return summonerID;
}
