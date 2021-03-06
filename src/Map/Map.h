//
// Created by Massimo Lopez on 2022-02-04.
//

#ifndef COMP335_P_MAP_H
#define COMP335_P_MAP_H
#include <vector>
#include "../Player/Player.h"

using namespace std;
class Player;
class Territory {
public:
    const string &getName() const;

    int getTerritoryId() const;

    int getContinentId() const;

    const string &getContinentName() const;

    int getArmyBonusValue() const;

    int getNumArmies() const;

    void setName(const string &name);

    void setContinentId(int continentId);

    void setContinentName(const string &continentName);

    void setArmyBonusValue(int numArmies);

    void setNumArmies(int numArmies);

    void setPlayer(int playerId);

    void neutralState();

    int getPlayer() const;

    Territory(const string name, const int territoryId, const int continentId, const int numArmies);

    Territory(const Territory &t1);

    Territory& operator=(const Territory& t1);

    friend std::ostream& operator<<(ostream &os, const Territory& territory);



private:
    string *_name;
    int _territoryId;
    int _continentId;
    string *_continentName;
    int _armyBonusValue;
    int _numOfArmy = 0;
    int belongToPlayer;
public:

};

class Map {
public:
    Map(const int V);

    Map(const Map &map1);

    Map& operator=(const Map& map1);

    friend std::ostream& operator<<(ostream &os, const Map& map);

    const int getSize() const;

    vector<Territory> *getTerritory();

    void setTerritoryVector(const vector<Territory> &territory, int rowIndex);

    void addTerritory(Territory territory, int rowIndex);

    const vector<Territory> &getTerritoryRow(int rowIndex) const;

    void printTerritoryBorders(int rowIndex);

    void printTerritoriesByContinentId(int continentId);

    bool validate();

    bool bfs(int start);

    bool bfsContinents(int start, int continentId);

    int getNumOfTerritoriesInContinent(int id);

    int getLastContinentId();

    int getArmyContinentBonus(int continentId);

    void assignTerritoriesToPlayers(vector<Player*> players);

    void assignTerritoriesToNeutralPlayer(Player* neutralPlayer, vector<Player*> players);

    virtual ~Map();

    bool isAdjacentTerritory(Territory* source, Territory* target);

    vector<Territory*> getAllAdjacentTerritories(Territory territory);



private:
    int SIZE;
    vector<Territory> *territory;

};

class MapLoader {
public:
    MapLoader(const string &fileName);

    MapLoader(const MapLoader &mapLoader1);

    MapLoader& operator=(const MapLoader& mapLoader1);

    friend std::ostream& operator<<(ostream &os, const MapLoader& mapLoader1);

    Map *generateMap();

    virtual ~MapLoader();

    bool success;

private:
    Map *map;
    string *continents;
    string *countries;
    string *borders;
};

#endif //COMP335_P_MAP_H