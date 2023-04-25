#include <iostream>
#include "Appliance.h"

int main(){
    Appliance a;
    a.set_isOn(1);
    a.set_powerRating(5);
    a.print();
}