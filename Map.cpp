//
// Created by Massimo Lopez on 2022-02-04.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Map.h"

// Functions for the Territory class
const string &Territory::getName() const {
    return _name;
}

void Territory::setName(const string &name) {
    _name = name;
}

Territory::Territory(const string &name) : _name(name) {}


// Functions for the Map class
// Constructor with vector of territories
//Map::Map(const vector<Territory> &territory) : territory(territory) {}
// Constructor with no vector (Vector is empty)
Map::Map(const int V) {
    for (int i = 0; i < V; i++) {
        territory.push_back(vector<Territory>());
    }
}

// set the vector
void Map::setTerritoryVector(const vector<Territory> &territory, int rowIndex) {
    Map::territory[rowIndex] = territory;
}

// Add a pointer to a territory (new Territory).
void Map::addTerritory(Territory territory, int rowIndex) {
//    this->territory.push_back(territory);
    this->territory[rowIndex].push_back(territory);
}

// Return a vector of territories
const vector<Territory> &Map::getTerritoryRow(int rowIndex) const {
    return territory[rowIndex];
}

// Erase the vector
Map::~Map() {
    territory.clear();
//    delete[] territory;
//    territory = NULL;
}

// Prints out the borders of the given country with that rowIndex (Adjacency list).
// TODO: Make a territory have an id and a name to lookup the borders from that index.
void Map::printBorders(int rowIndex) {
    cout << "Borders of Territory with index of ... " << rowIndex + 1 << endl;
    cout << rowIndex + 1;
    for (auto neighbour: territory[rowIndex]) {
        cout << " -> " << neighbour.getName();
    }
    cout << endl << endl;
}

MapLoader::MapLoader(const string &fileName) {
    ifstream inputFileStream(fileName);
//    cout << inputFileStream.eof() << endl;
//    inputFileStream.getline()

    if (!inputFileStream) {
        cerr << "Unable to open file .map file";
        exit(1);   // call system to stop
    }

//    if (inputFileStream) {
//        ostringstream oss;
//        oss << inputFileStream.rdbuf();
//        description = oss.str();
//    }

//    string line;
//    while (inputFileStream >> line) {
//
//        description += line;
//    }

//    int index = 0;
    string line;
    bool inContinents = false;
    bool inCountries = false;
    bool inBorders = false;
    while (!inputFileStream.eof()) {
        getline(inputFileStream, line);

        // Booleans to set where to copy the read values
        if (line == "[continents]") {
            inContinents = true;
        }
        if (line == "[countries]") {
            inContinents = false;
            inCountries = true;
        }
        if (line == "[borders]") {
            inCountries = false;
            inBorders = true;
        }

        // Reading Continents
        if (inContinents) {
            continents += line + "\n";
        }
        // Reading Countries
        if (inCountries) {
            countries += line + "\n";
        }
        // Reading Borders
        if (inBorders) {
            borders += line + "\n";
        }

    }
    inputFileStream.close();
}

const string &MapLoader::getContinents() const {
    return continents;
}

const string &MapLoader::getCountries() const {
    return countries;
}

const string &MapLoader::getBorders() const {
    return borders;
}