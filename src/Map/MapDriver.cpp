//
// Created by Massimo Lopez on 2022-02-04.
//

#include <iostream>
#include <vector>
#include "Map.h"
#include "../Player/Player.h"

const int SIZE = 13;
class MapDriver{
public:
    MapDriver(){};
    ~MapDriver(){};
    int callMapDriver() {

        // For now, manually making an example map (Based from the assignment video)
        Map *map = new Map(SIZE); // new map
        Territory *t1 = new Territory("Canada", 1, 1, 0); // new territories
        t1->setContinentName("North-America");
        t1->setArmyBonusValue(5);
        Territory *t2 = new Territory("USA", 2, 1, 0);
        t2->setContinentName("North-America");
        t2->setArmyBonusValue(5);
        Territory *t3 = new Territory("Mexico", 3, 1, 0);
        t3->setContinentName("North-America");
        t3->setArmyBonusValue(5);
        Territory *t4 = new Territory("Egypt", 4, 2, 0);
        t4->setContinentName("Africa");
        t4->setArmyBonusValue(2);
        Territory *t5 = new Territory("South Africa", 5, 2, 0);
        t5->setContinentName("Africa");
        t5->setArmyBonusValue(2);
        Territory *t6 = new Territory("USSR", 6, 3, 0);
        t6->setContinentName("Asia");
        t6->setArmyBonusValue(7);
        Territory *t7 = new Territory("Austria", 7, 3, 0);
        t7->setContinentName("Asia");
        t7->setArmyBonusValue(7);
        Territory *t8 = new Territory("Israel", 8, 3, 0);
        t8->setContinentName("Asia");
        t8->setArmyBonusValue(5);
        Territory *t9 = new Territory("Italy", 9, 4, 0);
        t9->setContinentName("Europe");
        t9->setArmyBonusValue(4);
        Territory *t10 = new Territory("Spain", 10, 4, 0);
        t10->setContinentName("Europe");
        t10->setArmyBonusValue(4);
        Territory *t11 = new Territory("France", 11, 4, 0);
        t11->setContinentName("Europe");
        t11->setArmyBonusValue(4);
        Territory *t12 = new Territory("Germany", 12, 4, 0);
        t12->setContinentName("Europe");
        t12->setArmyBonusValue(4);
        Territory *t13 = new Territory("Pacific Ocean", 13, 4, 0);
        t13->setContinentName("Europe");
        t13->setArmyBonusValue(4);

        // Manually assigning their adjacency territories (borders)
        // Adjacent to "1"
        map->addTerritory(*t1, 0);
        map->addTerritory(*t2, 0); // Push territory to vector
        map->addTerritory(*t3, 0);

        // Adjacent to "2"
        map->addTerritory(*t2, 1);
        map->addTerritory(*t1, 1);
        map->addTerritory(*t3, 1);

        // Adjacent to "3"
        map->addTerritory(*t3, 2);
        map->addTerritory(*t1, 2);
        map->addTerritory(*t2, 2);
        map->addTerritory(*t13, 2);

        // Adjacent to "4"
        map->addTerritory(*t4, 3);
        map->addTerritory(*t5, 3);

        // Adjacent to "5"
        map->addTerritory(*t5, 4);
//    DEBUG: Comment and Uncomment this adjacent node to check connectivity of sub-graphs
        map->addTerritory(*t4, 4);
        map->addTerritory(*t13, 4);

        // Adjacent to "6"
        map->addTerritory(*t6, 5);
        map->addTerritory(*t7, 5);

        // Adjacent to "7"
        map->addTerritory(*t7, 6);
        map->addTerritory(*t13, 6);
        map->addTerritory(*t8, 6);

        // Adjacent to "8"
        map->addTerritory(*t8, 7);
        map->addTerritory(*t6, 7);

        // Adjacent to "9"
        map->addTerritory(*t9, 8);
        map->addTerritory(*t10, 8);

        // Adjacent to "10"
        map->addTerritory(*t10, 9);
        map->addTerritory(*t12, 9);

        // Adjacent to "11"
        map->addTerritory(*t11, 10);
        map->addTerritory(*t13, 10);

        // Adjacent to "12"
        map->addTerritory(*t12, 11);
        map->addTerritory(*t11, 11);

        // Adjacent to "13"
        map->addTerritory(*t13, 12);
        map->addTerritory(*t4, 12);
        map->addTerritory(*t3, 12);
        map->addTerritory(*t9, 12);
        map->addTerritory(*t7, 12);

        for (int i = 0; i < SIZE; i++) {
            map->printTerritoryBorders(i);
        }

        map->printTerritoriesByContinentId(4);

        cout << "---Is the map above valid?:---" << endl;
        if (map->validate()) {
            cout << endl << "---Yes---" << endl;
        } else {
            cout << endl << "---No---" << endl;
        }

        cout << "_____" << map->getNumOfTerritoriesInContinent(1) << "_____" << endl;
        cout << "_____" << map->getLastContinentId() << "_____" << endl;
        cout << "_____" << map->getArmyContinentBonus(1)<< "_____" << endl;

        //// Debug: Test the Army value bonus feature
        // Army value with 1 territory
        Player* player = new Player();
        player->addTerritory(t1);
        player->displayTerritory(player->getTerritoryList());


        Player *player1 = new Player();
        vector<Player*> *players = new vector<Player*>();
        players->push_back(player);
        players->push_back(player1);


        delete (map); // delete values of map on heap
        map = NULL; // erase the address of the map.

        delete (t1); // delete values of territory1 on heap
        t1 = NULL; // erase the address of the territory1.

        delete (t2); // delete values of territory2 on heap
        t2 = NULL; // erase the address of the territory2.

        delete (t3); // delete values of territory3 on heap
        t3 = NULL; // erase the address of the territory3.

        delete (t4); // delete values of territory4 on heap
        t4 = NULL; // erase the address of the territory4.

        delete (t5); // delete values of territory5 on heap
        t5 = NULL; // erase the address of the territory5.

        delete (t6); // delete values of territory6 on heap
        t6 = NULL; // erase the address of the territory6.

        delete (t7); // delete values of territory7 on heap
        t7 = NULL; // erase the address of the territory7.

        delete (t8); // delete values of territory8 on heap
        t8 = NULL; // erase the address of the territory8.

        delete (t9); // delete values of territory9 on heap
        t9 = NULL; // erase the address of the territory9.

        delete (t10); // delete values of territory10 on heap
        t10 = NULL; // erase the address of the territory10.

        delete (t11); // delete values of territory11 on heap
        t11 = NULL; // erase the address of the territory11.

        delete (t12); // delete values of territory12 on heap
        t12 = NULL; // erase the address of the territory12.

        delete (t13); // delete values of territory13 on heap
        t13 = NULL; // erase the address of the territory13.


        // Generate a Map using the map loader
        cout << endl << "---Map Loader ---" << endl;

        // Choose from the map in the project folder. Possible to load other by changing the src fileName.
        MapLoader *pMapLoader = new MapLoader("../canada/canada.map");

        Map *generatedMap = pMapLoader->generateMap();

        for (int i = 0; i < generatedMap->getSize(); ++i) {
            generatedMap->printTerritoryBorders(i);
        }

        cout << "---Is the generated map valid?:---" << endl;
        if (generatedMap->validate()) {
            cout << endl << "---Yes---" << endl;
        } else {
            cout << endl << "---No---" << endl;
        }


        //// Debug: Test The random assignment of territories with the map loader's map
        generatedMap->assignTerritoriesToPlayers(*players);
        //// Debug: Test assignTerritories to neutral player
        Player * neutralPlayer = new Player();
        generatedMap->assignTerritoriesToNeutralPlayer(neutralPlayer, *players);

        delete players;
        players = NULL;

        delete (pMapLoader);
        pMapLoader = NULL;

        return 0;
    }
};