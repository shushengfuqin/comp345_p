//
// Created by Massimo Lopez on 2022-02-04.
//

#ifndef COMP335_P_MAP_H
#define COMP335_P_MAP_H

using namespace std;

class Territory {
public:
    const string &getName() const;

    int getTerritoryId() const;

    int getContinentId() const;

    const string &getContinentName() const;

    int getNumArmies() const;

    void setName(const string &name);

    void setContinentId(int continentId);

    void setContinentName(const string &continentName);

    void setNumArmies(int numArmies);

    Territory(const string &name, const int &territoryId, const int &continentId);

private:
    string _name;
    int _territoryId;
    int _continentId;
    string _continentName;
    int _numArmies;
public:

};

class Map {
public:
//    Map(const vector<Territory> &territory);
    Map(const int V);

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

    virtual ~Map();

private:
    int SIZE;
    vector<Territory> *territory;

};

class MapLoader {
public:
    MapLoader(const string &fileName);

    const string &getContinents() const;

    const string &getCountries() const;

    const string &getBorders() const;

    Map *generateMap();

private:
    string continents;
    string countries;
    string borders;
};

#endif //COMP335_P_MAP_H