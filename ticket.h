//
// Created by Jeremiah Kodjo on 11/25/2024.
//

#ifndef CORRECTBUSPROJECT_TICKET_H
#define CORRECTBUSPROJECT_TICKET_H
#include <string>
using namespace std;
class Ticket { //ticket class that holds all variables and public and private ifno
public:
    Ticket(string name, string code, string route, double price, double discount);
    void displayTicket();
    double getTotalPrice() const;
    string getConfirmationCode() const;
//gets name, confirmation code and applies discounts(if applicable)
private:
    string passengerName;
    string confirmationCode;
    string route;
    double priceBeforeDiscount;
    double priceAfterDiscount;
};


#endif //CORRECTBUSPROJECT_TICKET_H
