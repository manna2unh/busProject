//
// Created by Myles Annan on 11/25/2024.
//

#ifndef CORRECTBUSPROJECT_TRIP_H
#define CORRECTBUSPROJECT_TRIP_H

#include "ticket.h"
#include <vector>
using namespace std;
class Trip { //class to hold all trip info
public:
    void addPassengerTicket(Ticket ticket);
    void displayAllTickets();
    void cancelTicket(string confirmationCode);

private:
    vector<Ticket> tickets;
};

#endif //CORRECTBUSPROJECT_TRIP_H
