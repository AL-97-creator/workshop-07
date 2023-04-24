#ifndef APP_H
#define APP_H
#include "iostream"
#include <ctime>

using namespace std;

class Appliance{
public: 

int powerRating;
bool isOn;
Appliance();
Appliance(int powerRating, bool isOn);
void turnOn();
void turnOff();
virtual double getPowerConsumption();
void set_PowerRating(int pR);
int get_PowerRating();};

#endif