//
// Created by m_ann on 11/4/2024.
//

#ifndef BUSPROJECT_CUSTOMER_H
#define BUSPROJECT_CUSTOMER_H

#include <string>
using namespace std;

class Customer { //class for customers to keep track of customers info
public:
    string customerID;
    string name;
    int age;
    bool studentChecker;

    Customer(string customerID, string name, int age, bool studentChecker);
    double applyDiscount(double basePrice) const;
    void displayCustomer() const;
};

#endif //BUSPROJECT_CUSTOMER_H
