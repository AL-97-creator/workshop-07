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

    void Fridge::set_volume(double volume){
        this-> volume=volume;
    }
    double Fridge::get_volume(){
        return volume;
    }
     double Fridge::getPowerConsumption(){
        double pC= (get_powerRating())*24*((get_volume())/100);
        return pC;
    }
       void Fridge::print(){
        std::cout<< "volume = " << Fridge::get_volume() << std::endl;
        std::cout<< "powerConsumption = " << Fridge::getPowerConsumption() << std::endl;
    };