//
// Created by m_ann on 11/4/2024.
//

#ifndef BUSPROJECT_TRIP_H
#define BUSPROJECT_TRIP_H
#include <string>
using namespace std;
//class is for holding trip info and data
class Trip {
public:
    string tripID;
    string destination;
    string departure;
    double seatPrice;
    int availableSeat;

    Trip(string tripID, string destination, string departure, double seatPrice, int availableSeat);
    void displayTrip() const;
};
#endif //BUSPROJECT_TRIP_H
