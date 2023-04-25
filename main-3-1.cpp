#include "iostream"
#include <ctime>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include <vector>
#include "House.h"

int main(){
    House a;
    a.set_numAppliances(3);
    a.print();
}