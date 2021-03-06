//
// Created by yuxin wang on 2022/2/3.
//

#include <iostream>
#include "Orders.h"

using namespace std;

class OrdersDriver{

public:
    OrdersDriver(){};
    ~OrdersDriver(){};

    void callOrdersDriver() {
        Player *player1 = new Player();
        player1->setPlayerId(1);
        player1->setPlayerName("player1");
        Player *player2 = new Player();
        player2->setPlayerId(2);
        player2->setPlayerName("player2");
        const int SIZE = 4;
        Map *map = new Map(SIZE);


        Card *bombCard = new Card(bomb);
        Card *airliftCard = new Card(airlift);
        Card *blockadeCard = new Card(blockade);
        Card *diplomacyCard = new Card(diplomacy);

        player1->getHand()->addCard(bombCard);
        player1->getHand()->addCard(airliftCard);
        player2->getHand()->addCard(airliftCard);
        player1->getHand()->addCard(blockadeCard);
        player1->getHand()->addCard(diplomacyCard);


        Territory *territory1 = new Territory("big", 1, 1, 0);
        Territory *territory2 = new Territory("small", 2, 2, 3);
        Territory *territory3 = new Territory("medium", 3, 3, 5);
        Territory *territory4 = new Territory("large", 4, 4, 8);

        player1->addTerritory(territory1);
        player1->addTerritory(territory2);
        player2->addTerritory(territory3);
        player2->addTerritory(territory4);

        territory1->setContinentName("North-America");
        territory2->setContinentName("North-America");
        territory3->setContinentName("North-America");
        territory4->setContinentName("North-America");


        map->addTerritory(*territory1, 0);
        map->addTerritory(*territory2, 0);
        map->addTerritory(*territory3, 2);
        map->addTerritory(*territory4, 3);




        //Orders
        cout << "creating deploy order---------" << endl;
        Deploy *deploy1 = new Deploy(player1, territory1, 3);

        cout << "validate deploy---------" << endl;
        deploy1->validate();
        cout << "execute deploy---------" << endl;
        deploy1->execute();

        cout << "creating advance order---------" << endl;
        Advance *advance1 = new Advance(player1,player2, territory1, territory2, 1);
        advance1->map = map;

        cout << "validate advance---------" << endl;
        advance1->validate();
        cout << "execute advance---------" << endl;
        advance1->execute();

        cout << "creating bomb order---------" << endl;
        Bomb *bomb1 = new Bomb(player1, territory3);

        cout << "validate bomb---------" << endl;
        bomb1->validate();
        cout << "execute bomb---------" << endl;
        bomb1->execute();

        cout << "creating blockade order---------" << endl;
        Blockade *blockade1 = new Blockade(player1, territory2);

        cout << "validate blockade---------" << endl;
        blockade1->validate();
        cout << "execute blockade---------" << endl;
        blockade1->execute();


        cout << "creating airlift order---------" << endl;
        Airlift *airlift1 = new Airlift(player1, territory1, territory2, 1);
        //Airlift *airlift1 = new Airlift(player2, territory3, territory4, 3);

        cout << "validate airlift---------" << endl;
        airlift1->validate();
        cout << "execute airlift---------" << endl;
        airlift1->execute();


//        player1->issueOrders(deploy1);
//        player1->issueOrders(advance1);
//        player1->issueOrders(bomb1);
//        player1->issueOrders(blockade1);
//        player2->issueOrders(airlift1);

        Orderslist ol;

        ol.setOrderList(bomb1);
        ol.setOrderList(blockade1);
        ol.setOrderList(airlift1);
        ol.setOrderList(advance1);
        ol.setOrderList(deploy1);


        cout << "creating airlift order---------" << endl;
        Negotiate *negotiate1 = new Negotiate(player1, player2);


//        player1->issueOrders(negotiate1);

        cout << "validate negotiate---------" << endl;
        negotiate1->validate();
        cout << "execute negotiate--------" << endl;
        negotiate1->execute();


//        player1->issueOrders(bomb1);
        bomb1->validate();
        bomb1->execute();


        delete (map); // delete values of map on heap
        map = NULL; // erase the address of the map.

        delete (territory1); // delete values of territory1 on heap
        territory2 = NULL; // erase the address of the territory1.

        delete (territory2); // delete values of territory2 on heap
        territory2 = NULL; // erase the address of the territory2.

        delete (territory3); // delete values of territory3 on heap
        territory3 = NULL; // erase the address of the territory3.

        delete (territory4); // delete values of territory4 on heap
        territory4 = NULL; // erase the address of the territory4.



    }
};