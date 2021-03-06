//
// Created by Mia Yan on 9/2/2022.
//
#include <iostream>
#include "Player.h"

using namespace std;


class PlayerDriver{
public:
    PlayerDriver()= default;;
    ~PlayerDriver()= default;;
    void callPlayerDriver(){

//        //initialize the player
//        Player *player=new Player();
//
//        player->setPlayerId(1);
//        player->setPlayerName("PeterParker");
//
//        //initialize some new territories.
//        Territory *territory1= new Territory( "big", 1 ,1,0);
//        Territory *territory2= new Territory( "small", 2 ,2,0);
//        Territory *territory3= new Territory( "medium", 3 ,3,0);
//
//
//        //instantiate new list for player to defend
//        Territory *territory4= new Territory( "large", 4,4,0 );
//        Territory *territory5= new Territory( "ice", 5 ,5,0);
//        Territory *territory6= new Territory( "cap", 6 ,6,0);
//
//        //add territories to the player defend list
//        player->defendTerritory(territory4);
//        player->defendTerritory(territory5);
//        player->defendTerritory(territory5);
//        player->defendTerritory(territory6);
//
//        //player defend actions
//        player->toDefend();
//        player->displayTerritory(player->getDefendList());
//
//        //verify player has hand by adding cards
//        player->getHandLimit();
//
//    player1->setStrategy(cheater);
//    player1->setStrategyString(cheater->getStrategyName());
//    string test1 = player1->getPlayerStrategyString();
//
//    player2->setStrategy(aggressive);
//    player2->setStrategyString(aggressive->getStrategyName());
//    string test2 = player2->getPlayerStrategyString();
//
//    player3->setStrategy(benevolent);
//    player3->setStrategyString(benevolent->getStrategyName());
//    string test3 = player3->getPlayerStrategyString();
//
//    player4->setStrategy(human);
//    player4->setStrategyString(human->getStrategyName());
//    string test4 = player4->getPlayerStrategyString();
//
//    cout << "Hallo world" <<endl;
//    cout << test1 << endl;
//    cout << test2 << endl;
//    cout << test3 << endl;
//    cout << test4 << endl;
//
//
//
//    Deploy *deploy1 = new Deploy(player, territory1, 3);
//    Bomb *bomb1 = new Bomb(player, territory3);
//    Blockade *blockade1 = new Blockade(player, territory2);
//    Airlift *airlift1 = new Airlift(player, territory3, territory4, 3);
//
//        //issue new orders
//        player->issueOrders(deploy1);
//        player->issueOrders(bomb1);
//        player->issueOrders(blockade1);
//        player->issueOrders(airlift1);
//        Orderslist* ol = player->getOrderList();
//        cout << "Ruochen working\n";
//        ol->printOrderlist();
//        cout << "Ruochen done testing\n";
//        //use the player stream
//        cout<<"player 1 wanna talk: "<<*player<<endl;
//
//        cout<<"here is the new test"<<endl;
//        player->removeTerritory(territory7);
//        player->displayTerritory(player->getTerritoryList());
//
//
//        player->cancelDefend(territory4);
//        player->cancelDefend(territory4);
//        player->displayTerritory(player->getDefendList());
//
//
//        //create a new player
//        Player *player4=new Player();
//        player4->setPlayerId(4);
//        player4->setPlayerName("IronMan");
//        //create new territory that should be used to add into the player class
//        Territory *territory10= new Territory( "new territory 10", 10,7 ,0);
//        Territory *territory11= new Territory( "new territory 11", 11 , 8,0);
//        Territory *territory12= new Territory( "new territory 12", 12, 9 ,0);
//
//
//        //add territory belongs to the player
//        player4->addTerritory(territory10);
//        player4->addTerritory(territory11);
//        player4->addTerritory(territory12);
//        player4->displayTerritory(player4->getTerritoryList());
//
//        player->switchTerritories(territory8, player,player4);
//        player->displayTerritory(player->getTerritoryList());
//        player4->displayTerritory(player4->getTerritoryList());
//
//        player4->getOrderList();
//        cout<<"-----------------------------"<<endl;
//
//
//
//        cout<<player->getPlayerNumOfTerritoriesInContinent(9)<<endl;
//
//
//
//        player->displayTerritory(player->getTerritoryList());
//        player->containsTerritory(territory1);
//        player->containsTerritory(territory2);
//        player->containsTerritory(territory9);
//
//        territory1->setPlayer(1);
//        cout<<territory1->getPlayer()<<endl;
//        territory1->neutralState();
//        cout<<territory1->getPlayer()<<endl;
//
//        vector<Player*>* players=new vector<Player*>();
//        players->push_back(player4);
//
//
    // try to create a aggressive player

    // create a map instance.

    MapLoader *pMapLoader = new MapLoader("../maps/canada.map");
    Map *generatedMap = pMapLoader->generateMap();
    PlayerStrategy *aggressive = new Aggressive();
    PlayerStrategy *benevolent = new Benevolent();
    PlayerStrategy *cheater = new Cheater();
    PlayerStrategy *human = new Human();
    auto *player1 = new Player();
    auto *player2 = new Player();
    auto *player3 = new Player();
    auto *player4 = new Player();




    player1->setStrategy(cheater);
    player1->setStrategyString(cheater->getStrategyName());
    string test1 = player1->getPlayerStrategyString();

    player2->setStrategy(aggressive);
    player2->setStrategyString(aggressive->getStrategyName());
    string test2 = player2->getPlayerStrategyString();

    player3->setStrategy(benevolent);
    player3->setStrategyString(benevolent->getStrategyName());
    string test3 = player3->getPlayerStrategyString();

    player4->setStrategy(human);
    player4->setStrategyString(human->getStrategyName());
    string test4 = player4->getPlayerStrategyString();


    Territory *territory1= new Territory( "big", 1 ,1,30);
    Territory *territory2= new Territory( "small", 2 ,2,0);
    Territory *territory3= new Territory( "medium", 3 ,3,0);
    territory1->setContinentName("North-America");
    territory2->setContinentName("North-America");
    territory3->setContinentName("North-America");

    player2->addTerritory(territory1);
    player2->addTerritory(territory2);
    player2->addTerritory(territory3);

    player2->displayTerritory(player2->getTerritoryList());
    cout << "Hallo world" <<endl;
    cout << test1 << endl;
    cout << test2 << endl;
    cout << test3 << endl;
    cout << test4 << endl;

    vector<Player*>* playerList;
    playerList = new vector<Player*>();
    playerList->push_back(player1);
    playerList->push_back(player2);
    playerList->push_back(player3);
    playerList->push_back(player4);
    player2->findStrongestCountry();
}
};
