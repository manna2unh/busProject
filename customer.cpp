//
// Created by Nicole Hernadez on 11/4/2024.
//
#include "Customer.h"
using namespace std;

Customer::Customer(string name, string type, string discountType)
        : name(name), type(type), discountType(discountType) {}

string Customer::getName() {
    return name;
}

string Customer::getType() {
    return type;
}

string Customer::getDiscountType() {
    return discountType;
}