#ifndef HOUS_H
#define HOUS_H
#include "iostream"
#include <ctime>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include <vector>

using namespace std;

class House{
private:
int numAppliances;

public:
House();
House(int numAppliances);
void set_numAppliances(int numAppliances);
int get_numAppliances();
bool addAppliance(Appliance* Appliance);
double getTotalPowerConsumption();
void print();};

#endif