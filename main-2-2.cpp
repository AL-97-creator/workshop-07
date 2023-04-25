#include <iostream>
#include "Appliance.h"
#include "TV.h"

int main(){
    TV a;
    a.setScreenSize(3);
    a.set_powerRating(5);
    a.print();
}