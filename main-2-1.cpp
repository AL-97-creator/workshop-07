#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

int main(){
    Fridge a;
    a.setVolume(3);
    a.set_powerRating(5);
    a.print();
}