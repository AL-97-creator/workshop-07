#include <iostream>
#include <ctime>
#include "Appliance.h"
#include "Fridge.h"
using namespace std;

Fridge::Fridge(){
    powerRating=0;
    isOn=false;
    volume=0;
}
Fridge::Fridge(int powerRating, double volume) {
    this->powerRating=powerRating;
    this->volume=volume;
}

    void Fridge::setVolume(double volume){
        this-> volume=volume;
    }
    double Fridge::getVolume(){
        return volume;
    }
     double Fridge::getPowerConsumption(){
        double pC= (get_powerRating())*24*((getVolume())/100);
        return pC;
    }
       void Fridge::print(){
        std::cout<< "volume = " << Fridge::getVolume() << std::endl;
        std::cout<< "powerConsumption = " << Fridge::getPowerConsumption() << std::endl;
    };