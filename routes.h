//
// Created by Nicole Hernadez on 11/25/2024.
//

#ifndef CORRECTBUSPROJECT_ROUTES_H
#define CORRECTBUSPROJECT_ROUTES_H
#include <string>
#include <vector>
using namespace std;
class Routes { //class for routes that holds all functions,structs, and variables
public:
    Routes();//shows the routes
    void addRoute(string source, string destination, double distance, string driver, string busModel, int maxTravelers);
    void removeRoute(int routeIndex);
    void displayRoutes();
    string getRouteInfo(int routeIndex) const;
    double getRouteDistance(int routeIndex) const;

private:
    struct Route {
        string source;
        string destination;
        double distance;
        string driver;
        string busModel;
        int maxTravelers;
    };
    vector<Route> routeList;
};
#endif //CORRECTBUSPROJECT_ROUTES_H
