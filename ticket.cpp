//
// Created by m_ann on 11/4/2024.
//
#include "ticket.h"
#include <iostream>
using namespace std;
Ticket::Ticket(const string& name, const string& date, const string& depart, const string& arrival,
               const string& distance, const string& driver, int busModel, const string& code)
        : name(name), date(date), depart(depart), arrival(arrival), distance(distance),
          driver(driver), busModel(busModel), code(code) {}
bool Ticket::displayTicketInfo(const string& nameInput, const string& codeInput) const {
    if (name == nameInput && code == codeInput) {
        cout << "\nTicket Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Date: " << date << endl;
        cout << "Departing From: " << depart << endl;
        cout << "Arriving At: " << arrival << endl;
        cout << "Distance: " << distance << " miles" << endl;
        cout << "Driver: " << driver << endl;
        cout << "Bus Model: " << busModel << endl;
        cout << "Confirmation Code: " << code << endl;
        return true;
    }
    return false;
}