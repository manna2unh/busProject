//
// Created by Nicole Hernadez on 11/4/2024.
//
#include "customer.h"
#include <iostream>
using namespace std;

Customer::Customer(string customerID, string name, int age, bool studentChecker)
        : customerID(customerID), name(name), age(age), studentChecker(studentChecker) {}
double Customer::applyDiscount(double basePrice) const {
    return studentChecker ? basePrice * 0.8 : basePrice;
}
void Customer::displayCustomer() const {
    cout << "Customer ID: " << customerID << ", Name: " << name
         << ", Age: " << age << ", Student: " << (studentChecker ? "Yes" : "No") << endl;
}
