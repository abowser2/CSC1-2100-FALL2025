//implements the methods
#include "TravelLog.hpp"

//initilize private variables
TravelLog::TravelLog() 
{
    prevTime = 0;
    totalMiles = 0;
}

//add a new entry to log//
void TravelLog::addEntry(int speed, int clockTime)
{
    //calculate duration//
    int duration = clockTime - prevTime;
    //caluclate distance//
    int distance = speed * duration;
    //update total miles//
    totalMiles += distance;
    //update prev time//
    prevTime = clockTime;
}

//return total miles traveled//
int TravelLog::getTotalMiles() const
{
    return totalMiles;
}