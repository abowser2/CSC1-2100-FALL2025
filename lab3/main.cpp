//Ashlee Bowser, no lab partner
#include <iostream>
#include "TravelLog.hpp"
using namespace std;

int main()
{
    int n, sp, ct, dist;
    while (true) 
    {
        cin >> n;
        if (n == -1) {break;}
        // initialize array of object for each trip
        TravelLog trip;
        for (int i=0; i<n; i++) {
            cin >> sp >> ct;    // sp: speed, ct: clock time
            trip.addEntry(sp, ct);
        }
        dist = trip.getTotalMiles();
        cout << dist << " miles" << endl;
    }
    return 0;
}