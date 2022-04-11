//
// Created by deepbluecanada on 2022-04-08.
//

#ifndef COMP335_P_PLAYERSTRATEGIES_H
#define COMP335_P_PLAYERSTRATEGIES_H
#import <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "../Player/Player.h"

using namespace std;
class Player;
class Territory;
class PlayerStrategy {
public:
    Player* p;
    PlayerStrategy(); // default constructor
    ~PlayerStrategy(); // destructor
    void setPlayer(Player* p);
    virtual void issueOrder(Player*& i, Map* generatedMap) = 0;
    virtual vector <Territory*>* toAttack(Map* Map, Player &player) = 0;
    virtual vector <Territory*>* toDefend(Map* Map, Player &player) = 0;
    void setStrategyName(string name); // Mutator
    string getStrategyName() const; // Accesor
private:
    string strategy_name;
  };

/**
 * Player strat human
 */
class Human: public PlayerStrategy {
public:
    Human(); // default constructor
    void issueOrder(Player*& i, Map* generatedMap) override;
    vector <Territory*>* toAttack(Map* Map, Player &player) override;
    vector <Territory*>* toDefend(Map* Map, Player &player) override;
};

/**
 *  Player strat Aggressive
 */
class Aggressive: public PlayerStrategy {
public:
    Aggressive(); // default constructor
    void issueOrder(Player*& i, Map* generatedMap) override;
    vector <Territory*> toAttack(Map* Map, Player &player) override;
    vector <Territory*> toDefend(Map* Map, Player &player) override;
};

/**
 *  Player strat Benevolent
 */
class Benevolent: public PlayerStrategy {
public:
    Benevolent();
    void issueOrder(Player*& i, Map* generatedMap) override;
    vector <Territory*> toAttack(Map* Map, Player &player) override;
    vector <Territory*> toDefend(Map* Map, Player &player) override;
};

/**
 *  Player strat Neutral
 */
class Neutral: public PlayerStrategy {
public:
    Neutral(); // default constructor
    void issueOrder(Player*& i, Map* generatedMap) override;
    vector <Territory*> toAttack(Map* Map, Player &player) override;
    vector <Territory*> toDefend(Map* Map, Player &player) override;
};

/**
 *  Player strat Cheater
 */
class Cheater: public PlayerStrategy {
public:
    Cheater();  // default constructor
    void issueOrder(Player*& i, Map* generatedMap) override;
    vector <Territory*> toAttack(Map* Map, Player &player) override;
    vector <Territory*> toDefend(Map* Map, Player &player) override;
};

#endif //COMP335_P_PLAYERSTRATEGIES_H
