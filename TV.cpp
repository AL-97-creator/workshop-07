#include <iostream>
#include <ctime>
#include "Appliance.h"
#include "TV.h"
using namespace std;

TV::TV(){
    powerRating=0;
    isOn=false;
    screenSize=0;
}
TV::TV(int powerRating, double screenSize) {
    this->powerRating=powerRating;
    this->screenSize=screenSize;
}

    void TV::setScreenSize(double screenSize){
        this-> screenSize=screenSize;
    }
    double TV::getScreenSize(){
        return screenSize;
    }
     double TV::getPowerConsumption(){
        double pC= (get_powerRating())*((getScreenSize())/10);
        return pC;
    }
       void TV::print(){
        std::cout<< "volume = " << TV::getScreenSize() << std::endl;
        std::cout<< "powerConsumption = " << TV::getPowerConsumption() << std::endl;
    };