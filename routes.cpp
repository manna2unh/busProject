//
// Created by Nicole Hernadez on 11/25/2024.
//
#include "Routes.h"
#include <iostream>
using namespace std;

Routes::Routes() { //routes class that holds lists of routes and functions to remove, add, display, and show route info
    routeList = {
            {"Downtown", "Airport", 20, "Nicole Hernadez", "NH3", 50},
            {"Suburbs", "Downtown", 30, "Jeremiah Kodjo", "JK7", 40},
            {"Airport", "Farmlands", 55, "Myles Annan", "MA5", 30}
    };
}

void Routes::addRoute(string source, string destination, double distance, string driver, string busModel, int maxTravelers) { //route function to add route
    Route newRoute = {source, destination, distance, driver, busModel, maxTravelers};
    routeList.push_back(newRoute);
    cout << "Route added: " << source << " to " << destination << endl;
}

void Routes::removeRoute(int routeIndex) { //route function to remove route
    if (routeIndex >= 0 && routeIndex < routeList.size()) {
        cout << "Route removed: " << routeList[routeIndex].source << " to " << routeList[routeIndex].destination << endl;
        routeList.erase(routeList.begin() + routeIndex);
    } else {
        cout << "Invalid route index." << endl;
    }
}

void Routes::displayRoutes() { //route funnction to display any routes in the class
    cout << "Available Routes:" << endl;
    for (size_t i = 0; i < routeList.size(); i++) {
        cout << i + 1 << ". " << routeList[i].source << " to " << routeList[i].destination
             << " (" << routeList[i].distance << " miles)" << endl;
    }
}

string Routes::getRouteInfo(int routeIndex) const { //route function to call any info within route
    if (routeIndex >= 0 && routeIndex < routeList.size()) {
        return routeList[routeIndex].source + " to " + routeList[routeIndex].destination;
    }
    return "Invalid Route!";
}

double Routes::getRouteDistance(int routeIndex) const { //function  to call distance of route
    if (routeIndex >= 0 && routeIndex < routeList.size()) {
        return routeList[routeIndex].distance;
    }
    return -1;
}
