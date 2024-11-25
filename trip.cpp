//
// Created by Myles Annan on 11/25/2024.
//
#include "trip.h"
#include <iostream>
using namespace std;

void Trip::addPassengerTicket(Ticket ticket) {
    tickets.push_back(ticket);
    cout << "Ticket added successfully!" << endl;
}

void Trip::displayAllTickets() {
    if (tickets.empty()) {
        cout << "No tickets available to display." << endl;
        return;
    }
    cout << "All Tickets:" << endl;
    for (size_t i = 0; i < tickets.size(); i++) {
        cout << "Ticket " << i + 1 << ":" << endl;
        tickets[i].displayTicket();
        cout << endl;
    }
}

void Trip::cancelTicket(string confirmationCode) {
    for (size_t i = 0; i < tickets.size(); i++) {
        if (tickets[i].getConfirmationCode() == confirmationCode) {
            tickets.erase(tickets.begin() + i);
            cout << "Ticket with confirmation code " << confirmationCode << " has been canceled." << endl;
            return;
        }
    }
    cout << "No ticket found with the provided confirmation code." << endl;
}