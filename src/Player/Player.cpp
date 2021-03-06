//
// Created by Mia Yan on 8/2/2022.
//
#include <ostream>
#include <algorithm>
#include "Player.h"

using namespace std;

//Player constructor
Player::Player() {
    //player owns a hand
    playerHand = new Hand();
    //player owns a territory list
    playerTerritoryList = new vector<Territory *>;
    //player owns a defend territory list
    playerDefendList = new vector<Territory *>();
    //player owns an attack territory list
    playerAttackList = new vector<Territory *>();
    //player owns an order list
    orderList = new Orderslist();
    playerId = 0;
    playerName;
    armyNum = 50;
}

//Player constructor (with name)
Player::Player(string name) {
    //player owns a hand
    playerHand = new Hand();
    //player owns a territory list
    playerTerritoryList = new vector<Territory *>;
    //player owns a defend territory list
    playerDefendList = new vector<Territory *>();
    //player owns an attack territory list
    playerAttackList = new vector<Territory *>();
    //player owns an order list
    orderList = new Orderslist();
    int playerId = 0;
    armyNum = 50;
    setPlayerName(name);
}

//Player destructor
Player::~Player() {
    delete playerHand;
    for (int i = 0; i < playerTerritoryList->size(); i++) {
        delete playerTerritoryList->at(i);
    }
    delete playerTerritoryList;
    for (int i = 0; i < playerAttackList->size(); i++) {
        delete playerAttackList->at(i);
    }
    delete playerAttackList;
    for (int i = 0; i < playerDefendList->size(); i++) {
        delete playerDefendList->at(i);
    }
    delete playerDefendList;
    delete orderList;
}


//Player copy constructor
//it should call the copy constructor of the other classes
//to avoid copy the pointer
Player::Player(
        const Player &player1) {
    this->playerHand = player1.playerHand;
    for (int i = 0; i < player1.playerTerritoryList->size(); i++) {
        this->playerTerritoryList->push_back(player1.playerTerritoryList->at(i));
    }

    for (int i = 0; i < player1.playerDefendList->size(); i++) {
        this->playerDefendList->push_back(player1.playerDefendList->at(i));
    }

    for (int i = 0; i < player1.playerAttackList->size(); i++) {
        this->playerAttackList->push_back(player1.playerAttackList->at(i));
    }

    for (int i = 0; i < player1.orderList->getOrderList()->size(); i++) {
        this->orderList->setOrderList(player1.orderList->getOrderList()->at(i));
    }

    this->playerId = player1.playerId;
}


//Player assignment operator overload
//it should call the copy constructor of the other classes
//to avoid copy the pointer
Player &Player::operator=(const Player &player1) {
    this->playerHand = player1.playerHand;
    for (int i = 0; i < player1.playerTerritoryList->size(); i++) {
        this->playerTerritoryList->push_back(player1.playerTerritoryList->at(i));
    }

    for (int i = 0; i < player1.playerDefendList->size(); i++) {
        this->playerDefendList->push_back(player1.playerDefendList->at(i));
    }

    for (int i = 0; i < player1.playerAttackList->size(); i++) {
        this->playerAttackList->push_back(player1.playerAttackList->at(i));
    }

    for (int i = 0; i < player1.orderList->getOrderList()->size(); i++) {
        this->orderList->setOrderList(player1.orderList->getOrderList()->at(i));
    }


    this->playerId = player1.playerId;

    return *this;
}


//Player stream insertion
std::ostream &operator<<(ostream &os, const Player &player) {
    os << "Hi I am player :" << player.playerName << endl;
    return os;
}


//once a player want to attack a territory, the territory
//is added to the attack list
void Player::attackTerritory(Territory *territory) {
    //validating if the territory already in the list
    if (std::count(playerAttackList->begin(), playerAttackList->end(), territory)) {
        std::cout << "Element already existed, cannot be added to the player " << playerName << "'s attack list: "
                  << territory->getName() << endl;
    } else {
        //add territory to the attack list
        playerAttackList->push_back(territory);
        std::cout << "Element has been added to the player " << playerName << "'s attack list: "
                  << territory->getName() << endl;
    }

}

//once some other player want to attack a territory, the territory
//is added to the defend list
void Player::defendTerritory(Territory *territory) {

    //validating if the territory already in the list
    if (std::count(playerDefendList->begin(), playerDefendList->end(), territory)) {
        std::cout << "Element already existed, cannot be added to the player " << playerName << "'s defend list: "
                  << territory->getName() << endl;
    } else {
        //add territory to the defended list
        playerDefendList->push_back(territory);
        std::cout << "Element has been added to the player " << playerName << "'s defend list: "
                  << territory->getName() << endl;
    }
}

//assignment a territory to the player class
void Player::addTerritory(Territory *territory) {
    //check if the territory already in the


    //validating if the territory already in the list
    if (std::count(playerTerritoryList->begin(), playerTerritoryList->end(), territory)) {
        std::cout << "Element already existed, cannot be added to the player " << playerName << "'s defend list: "
                  << territory->getName() << endl;
    } else {
        //add territory to the list
        playerTerritoryList->push_back(territory);
        std::cout << "Element has been added to the player " << playerName << "'s territories list: "
                  << territory->getName() << endl;
    }
}

//add an assignment to remove territories
void Player::removeTerritory(Territory *territory) {
    //validating if the territory already in the list
    // check if that player control the territory
    bool contain = false;
    int counter = -1;
    for(auto &pt : *playerTerritoryList){
        counter ++;
        if(pt->getName() == territory->getName()){
            contain = true;
            break;
        }
    }
    if(contain){
        cout << "testing"<< endl;
        //remove from territoy list
        playerTerritoryList->erase(playerTerritoryList->begin()+counter);
//        playerTerritoryList->erase(std::remove(playerTerritoryList->begin(), playerTerritoryList->end(), territory),
//                                   playerTerritoryList->end());

        std::cout << "Element removed from the player " << playerName << "'s Territory list: "
                  << territory->getName() << endl;
    } else {
        std::cout << "The player does not have such territory, so the remove from player " << playerName
                  << "'s territory list failed: " << territory->getName() << endl;
    }
//    if (std::count(playerTerritoryList->begin(), playerTerritoryList->end(), territory)) {
//        //remove the territory from the list
//        playerTerritoryList->erase(std::remove(playerTerritoryList->begin(), playerTerritoryList->end(), territory),
//                                   playerTerritoryList->end());
//
//        std::cout << "Element removed from the player " << playerName << "'s Territory list: "
//                  << territory->getName() << endl;
//
//    } else {
//
//        std::cout << "The player does not have such territory, so the remove from player " << playerName
//                  << "'s territory list failed: " << territory->getName() << endl;
//    }


}

//cancel the attack
void Player::cancelAttack(Territory *territory) {
    //validating if the territory already in the list
    if (std::count(playerAttackList->begin(), playerAttackList->end(), territory)) {
        //remove the territory from the list
        playerAttackList->erase(std::remove(playerAttackList->begin(), playerAttackList->end(), territory),
                                playerAttackList->end());

        std::cout << "Element removed from the player " << playerName << "'s Attacking list: "
                  << territory->getName() << endl;

    } else {

        std::cout << "The player " << playerName
                  << " didn't want to attack the following territory, so the remove failed: "
                  << territory->getName() << endl;
    }


}

bool Player::containsTerritory(Territory *territory) {
    if (std::count(playerTerritoryList->begin(), playerTerritoryList->end(), territory)) {
        cout << "player " << playerName << " has " << territory->getName() << endl;
        return true;
    } else {
        cout << "player " << playerName << " does not have this territory" << endl;
        return false;
    }
}

bool Player::canAttack(Territory *territory) {
    for (int i = 0; i < playerAttackList->size(); i++) {
        if (playerAttackList->at(i)->getTerritoryId() == territory->getTerritoryId()) {
            return false;
        }

    }
    return true;
}

bool Player::alreadyOwn(Territory *territory) {
    for (int i = 0; i < playerTerritoryList->size(); i++) {
        if (playerTerritoryList->at(i)->getTerritoryId() == territory->getTerritoryId()) {
            return true;
        }

    }
    return false;
}


//take a territory as parameters
//a boolean function to know if the territory is in the attack list
bool Player::containTerritoryByName(string territoryName, vector<Territory *> *territoryList) {
    for (int i = 0; i < territoryList->size(); i++) {
        if (territoryList->at(i)->getName().compare(territoryName)) {
            cout << "player " << playerName << " can attack this territory" << endl;
            return true;
        }
    }

    cout << "player " << playerName << " cannot attack this territory" << endl;
    return false;

}

//cancel the defend
void Player::cancelDefend(Territory *territory) {
    //validating if the territory already in the list
    if (std::count(playerDefendList->begin(), playerDefendList->end(), territory)) {
        //remove the territory from the list
        playerDefendList->erase(std::remove(playerDefendList->begin(), playerDefendList->end(), territory),
                                playerDefendList->end());

        std::cout << "Element removed from the player " << playerName << "'s defending list: "
                  << territory->getName() << endl;

    } else {

        std::cout << "The player " << playerName
                  << " did not need to defend the following territory, so the remove failed: "
                  << territory->getName() << endl;
    }


}

//the player attack action, returns a list of territories being attacked
vector<Territory *> *Player::toAttack(Map *map) {
    for (int i = 0; i < playerTerritoryList->size(); i++) {
        vector<Territory *> adjList = map->getAllAdjacentTerritories(*playerTerritoryList->at(i));

        for (int j = 0; j < adjList.size(); j++) {

            if (this->canAttack(adjList.at(j)) && this->alreadyOwn(adjList.at(j)) == false) {
                this->attackTerritory(adjList.at(j));
            }
        }
    }

    return playerAttackList;

}

//the player defend action, returns a list of territories being defended
vector<Territory *> *Player::toDefend() {

    return playerTerritoryList;
}

void Player::displayTerritory(vector<Territory *> *territory) {

    for (auto &t: *territory) {
        cout << "Territory ID: " << t->getTerritoryId() << " Territory Name : " << t->getName()
             << " Territory current Army Num: " << t->getNumArmies() << endl;
    }

}

int Player::getHandLimit() {

    //display the number of hand of this player
    cout << '\n' << "Hand Limit for this player " << playerName << ": " << '\n' << endl;
    cout << playerHand->getHandLimit() << '\n' << endl;

    return playerHand->getHandLimit();

}

Territory *Player::getTerritoryByName(string name, vector<Territory *> *territoryList) {
    for (int i = 0; i < territoryList->size(); i++) {
        if (territoryList->at(i)->getName().compare(name)) {
            return territoryList->at(i);
        }
    }

}

void Player::issueOrders(Player *&i, Map *generatedMap, bool deployOrNot, vector<Player *> *playerList) {
//        add the order in the order list
//        orderList->setOrderList(order);
    this->strategy->issueOrder(i, generatedMap, deployOrNot, playerList);
}


//getTerritoryList
vector<Territory *> *Player::getTerritoryList() {

    return playerTerritoryList;
}

//getAttackList
vector<Territory *> *Player::getAttackList() {

    return playerAttackList;
}

//getDefendList
vector<Territory *> *Player::getDefendList() {

    return playerDefendList;
}

void Player::setPlayerId(int id) {
    playerId = id;

}

int Player::getPlayerId() {

    return playerId;
}

void Player::setPlayerName(string name) {
    playerName = name;

}

//get the orderList
Orderslist *Player::getOrderList() {
    return orderList;
}

string Player::getPlayerName() {

    return playerName;
}

int Player::getArmyNum() {
    return armyNum;
}

int Player::addArmyNum(int number) {
    armyNum += number;
    return armyNum;
}

int Player::removeArmyNum(int number) {
    armyNum -= number;
    return armyNum;
}


//switchTerritories between two player, remove from player 1, add to player 2.
void Player::switchTerritories(Territory *territory, Player *player1, Player *player2) {
    player1->removeTerritory(territory);
    player2->addTerritory(territory);

    cout << "the territory :" << territory->getName() << "has been removed from player " << player1->getPlayerName()
         << " and added to player " << player2->getPlayerName() << endl;
}

int Player::getPlayerNumOfTerritoriesInContinent(int id) {
    int numOfTerritories = 0;
    for (int index = 0; index < playerTerritoryList->size(); index++) {
        if (playerTerritoryList->at(index)->getContinentId() == id) {
            numOfTerritories++;
        }
    }
    return numOfTerritories;

}


void Player::calculateBonus(Map *map) {
    int continentNum = map->getLastContinentId();
    for (int i = 1; i <= continentNum; i++) {
        int x = this->getPlayerNumOfTerritoriesInContinent(i);
        int y = map->getNumOfTerritoriesInContinent(i);

        if (x == y) {
            armyNum += map->getArmyContinentBonus(i);
        }
    }

}

void Player::calculateArmy(Map *map) {
    armyNum += playerTerritoryList->size() / 3;
    this->calculateBonus(map);
    if (armyNum < 3) {
        armyNum = 3;
    }

}

bool Player::containsOrder(string orderType) {
    vector<Order *> *listOfOrders = orderList->getOrderList();
    auto iter = listOfOrders->begin();
    for (; iter != listOfOrders->end(); iter++) {
        if ((*iter)->getOrderType() == orderType) {
            cout << "the list contains the order" << endl;
            return true;
        }

    }
    return false;
}

Order *Player::getOrderbyType(string orderType) {
    vector<Order *> *listOfOrders = orderList->getOrderList();
    auto iter = listOfOrders->begin();
    for (; iter != listOfOrders->end(); iter++) {
        if ((*iter)->getOrderType() == orderType) {
            cout << "the list contains the order" << endl;
            return *iter;
        }
    }
    cout << "this player does not contain this order" << endl;
    return nullptr;
}

void Player::setStrategy(PlayerStrategy *newStrategy) {
    this->strategy = newStrategy;
}

void Player::setStrategyString(string strategyString) {
    this->strategyString = strategyString;
}

PlayerStrategy *Player::getPlayerStrategy() {
    return strategy;
}

string Player::getPlayerStrategyString() {
    return strategyString;
}

Territory*  Player::findStrongestCountry(){
    Territory* strongest;
    // i need to create an array of territory's army

    int armyArr[playerTerritoryList->size()];
    int counter = 0;
    for(auto &ptl : *playerTerritoryList){
        armyArr[counter] = ptl->getNumArmies();
        counter++;
    }
    for(int i = 0; i<playerTerritoryList->size(); i++){
        cout << "Army num: " << armyArr[i]<< endl;
    }
    int largestIndex = 0;
    for(int i = 1;i < playerTerritoryList->size(); ++i) {
        // Change < to > if you want to find the smallest element
        if(armyArr[0] < armyArr[i]){
            armyArr[0] = armyArr[i];
            cout << i<<endl;
            largestIndex = i;
        }
    }
    strongest = playerTerritoryList->at(largestIndex);
//    auto iter = playerTerritoryList->begin();
//    for(; iter != playerTerritoryList->end(); iter++){
//        if((*iter)->getNumArmies()>=strongest->getNumArmies()){
//            strongest = *iter;
//        }
//    }
    cout<< "The Strongest country from "<< playerName << "is Territory " <<strongest->getName();
    return strongest;
}


Territory*  Player::findWeakestCountry(){
    Territory* weakest;
    auto iter = playerTerritoryList->begin();
    weakest = *iter;
    for(; iter != playerTerritoryList->end(); iter++){
        if((*iter)->getNumArmies()<weakest->getNumArmies()){
            weakest = *iter;
        }
    }
    cout<< "The Strongest country from "<< playerName << "is Territory" <<weakest->getName();
    return weakest;
}

bool Player::isNoArmy(){
        for(int i=0;i<playerTerritoryList->size();i++){
            if(playerTerritoryList->at(i)->getNumArmies()!=0){
                return false;
            }
        }
    return true;
    }