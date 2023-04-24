#include <iostream>
#include <ctime>
#include "Appliance.h"
using namespace std;

Appliance::Appliance(){
    powerRating=0;
    isOn=false;
}
Appliance::Appliance(int powerRating, bool isOn) {
    this->powerRating=powerRating;
    isOn=false;
}


    void Appliance::turnOff(){
        1+1;
    }

    void Appliance::turnOn(){
        1+1;
    }

    double Appliance::getPowerConsumption(){
        return 0;
    }
    void Appliance::setPowerRating(int pR){
        powerRating=pR;
    }
    int Appliance::getPowerRating(){
        return powerRating;
    }