#ifndef FRI_H
#define FRI_H
#include "iostream"
#include <ctime>
#include "Appliance.h"

using namespace std;

class Fridge: public Appliance{
private:
double volume;

public: 
Fridge();
Fridge(int powerRating, double volume);
void setVolume(double volume);
double getVolume();
double getPowerConsumption();
void print();};


#endif