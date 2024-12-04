//
// Created by Myles Annan on 11/15/2024.
//

#ifndef CORRECTBUSPROJECT_CUSTOMER_H
#define CORRECTBUSPROJECT_CUSTOMER_H
#include <string>
using namespace std;
class Customer 
{
public:
    Customer(string name, string type, string discountType);
    string getName();//name of user
    string getType();// "Driver" or "Passenger"
    string getDiscountType();// "Student", "Military", "Online".

private:
    string name;//name of user
    string type; // "Driver" or "Passenger"
    string discountType; // "Student", "Military", "Online".
};

#endif //CORRECTBUSPROJECT_CUSTOMER_H
