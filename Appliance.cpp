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
        isOn=false;
    }

    void Appliance::turnOn(){
        isOn=true;
    }

    double Appliance::getPowerConsumption(){
        return 0;
    }
    void Appliance::set_PowerRating(int pR){
        powerRating=pR;
    }
    int Appliance::get_PowerRating(){
        return powerRating;
    }