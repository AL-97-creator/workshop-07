#include "iostream"
#include <ctime>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include <vector>
#include "House.h"
using namespace std;

House::House(){
*Appliance= new Appliance[0];
}
House::House(int numAppliances) {
*Appliance = new Appliance[numAppliances];
}
    double House::getTotalPowerConsumption(){
        int sum=0;
        for (int i=0;i<numAppliances;i++){
            sum=sum+Appliance[i]::getPowerConsumption();
        }
        return sum;
    }

       void House::print(){
        std::cout<< "total power = " << House::get_numAppliances() << std::endl;
        std::cout<< "total powerConsumption = " << House::getTotalPowerConsumption() << std::endl;
    };