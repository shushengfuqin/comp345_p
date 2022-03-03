#include <iostream>
#include <string>
#include "./src/Cards/CardsDriver.cpp"
#include "src/Order/OrdersDriver.cpp"
#include "src/GameEngine/GameEngineDriver.cpp"
#include "src/Map/MapDriver.cpp"
#include "src/Player/PlayerDriver.cpp"
#include "src/Observer/LoggingObserver.h"
using namespace std;

int main() {
    string x;

    cout << "------------- ORDER DRIVER CLASS ----------------\n";
    OrdersDriver od;
    od.callOrdersDriver();
    cout << "\n";
    cout << "Going to the next one please enter Y\n";
    cin >> x;
    cout << "\n";


    if(x == "y"){
        cout << "------------- CARDS DRIVER CLASS ----------------\n";
        CardsDriver cd;
        cd.callCardsDriver();
    }

    cout << "\n";
    cout << "Going to the next one please enter Y\n";
    cin >> x;

    cout << "\n";
    if(x == "y"){
        cout << "------------- GAME ENGINE DRIVER CLASS ----------------\n";
        GameEngineDriver::callGameEngineDriver();
    }

    cout << "\n";
    cout << "Going to the next one please enter Y\n";
    cin >> x;

    cout << "\n";
    if(x == "y"){
        cout << "------------- MAP DRIVER CLASS ----------------\n";
        MapDriver md;
        md.callMapDriver();
    }

    cout << "\n";
    cout << "Going to the next one please enter Y\n";
    cin >> x;
    cout << "\n";
    if(x == "y"){
        cout << "------------- PLAYER DRIVER CLASS ----------------\n";
        PlayerDriver playerDriver;
        playerDriver.callPlayerDriver();
    }

    LogObserver lod;
    LogObserver::writeToFile("this");

    return 0;
}
