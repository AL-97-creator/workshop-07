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
void set_powerRating(int pR);
int get_powerRating();
bool get_isOn();
void set_isOn(bool isOn);};


#endif