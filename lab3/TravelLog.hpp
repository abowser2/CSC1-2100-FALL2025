//contains the class declaration (only function names nad parameters)
#ifndef TRAVELLOG_HPP
#define TRAVELLOG_HPP

class TravelLog 
{
    public:
        //initialize a new empty log//
        TravelLog();
        //add a new entry to the log//
        void addEntry(int speed, int clockTime);
        //return the total number of miles traveled//
        int getTotalMiles() const;

    private:
        //keep track of the last recorded time//
        int prevTime;
        //accumulate the total miles traveled//
        int totalMiles;
};

#endif