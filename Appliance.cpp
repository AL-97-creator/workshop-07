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
    void Appliance::set_powerRating(int powerRating){
        this-> powerRating=powerRating;
    }
    int Appliance::get_powerRating(){
        return powerRating;
    }
    bool Appliance::get_isOn(){
        return isOn;
    }
    void Appliance::set_isOn(bool isOn){
        this->isOn=isOn;
    }