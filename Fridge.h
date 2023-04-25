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
void set_volume(double volume);
double get_volume();
double getPowerConsumption();
void print();};


#endif