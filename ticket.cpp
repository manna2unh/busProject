//
// Created by Jeremiah Kodjo on 11/25/2024.
//
#include "Ticket.h"
#include <iostream>
#include <iomanip>
using namespace std;

Ticket::Ticket(string name, string code, string route, double price, double discount)
        : passengerName(name), confirmationCode(code), route(route), priceBeforeDiscount(price),
        priceAfterDiscount(price - (price * discount)){}

void Ticket::displayTicket() {
    cout << fixed << setprecision(2);
    cout << "Ticket Info:" << endl;
    cout << "Passenger Name: " << passengerName << endl;
    cout << "Confirmation Code: " << confirmationCode << endl;
    cout << "Route: " << route << endl;
    cout << "Price Before Discount: $" << priceBeforeDiscount << endl;
    cout << "Price After Discount: $" << priceAfterDiscount << endl;
}

double Ticket::getTotalPrice() const {
    return priceAfterDiscount;
}

string Ticket::getConfirmationCode() const{
    return confirmationCode;
}
