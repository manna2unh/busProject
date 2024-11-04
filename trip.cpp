//
// Created by m_ann on 11/4/2024.
//
#include "trip.h"
#include <string>
#include <iostream>
using namespace std;
//trip class included with functions that allow to run
Trip::Trip(string tripID, string destination, string departure, double seatPrice, int availableSeat)
:tripID(tripID), destination(destination), departure(departure),seatPrice(seatPrice), availableSeat(availableSeat) {}

void Trip::displayTrip() const { //function within class "Trip" to display trip information
        cout << "Trip ID: " << tripID << endl;
        cout << "Destination: " << destination << endl;
        cout << "Departure Info: " << departure << endl;
        cout << "Seat Price: " << seatPrice << endl;
        cout << "Seats Available: " << availableSeat;
    }