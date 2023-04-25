#ifndef FRI_H
#define FRI_H
#include "iostream"
#include <ctime>
#include "Appliance.h"

using namespace std;

class TV: public Appliance{
private:
double screenSize;

public: 
TV();
TV(int powerRating, double screenSize);
void setScreenSize(double screenSize);
double getScreenSize();
double getPowerConsumption();
void print();};


#endif