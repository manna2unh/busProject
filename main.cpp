#include <iostream>
#include "Routes.h"
#include "Trip.h"
#include "ticket.h"
#include "customer.h"
using namespace std;

double calculateDiscount(int category);

int main() {
    Routes routes;
    Trip trip;
    int choice;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Add a Trip" << endl;
        cout << "2. Remove a Trip" << endl;
        cout << "3. Book a Ticket" << endl;
        cout << "4. Cancel a Ticket" << endl;
        cout << "5. Display All Tickets" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) { //menu choice to add trip to routes class which will hold all input trips
            case 1: {
                string source, destination, driver, busModel;
                double distance;
                int maxTravelers;
                cout << "Enter Source: ";
                getline(cin, source);
                cout << "Enter Destination: ";
                getline(cin, destination);
                cout << "Enter Distance (miles): ";
                cin >> distance;
                cin.ignore();
                cout << "Enter Driver: ";
                getline(cin, driver);
                cout << "Enter Bus Model: ";
                getline(cin, busModel);
                cout << "Enter Max Travelers: ";
                cin >> maxTravelers;
                routes.addRoute(source, destination, distance, driver, busModel, maxTravelers);
                break;
            }
            case 2: { //option to display routes and delete any that have been entered in and are within the routes class
                routes.displayRoutes();
                int routeIndex;
                cout << "Enter route number to remove: ";
                cin >> routeIndex;
                routes.removeRoute(routeIndex - 1);
                break;
            }
            case 3: {
                routes.displayRoutes(); //option to book a ticket with a chosen route, name code, and the type of discount
                int routeIndex;
                cout << "Select a route to book: " //prompts for route
                cin >> routeIndex;
                cin.ignore();
                double distance = routes.getRouteDistance(routeIndex - 1);
                if (distance < 0) {
                    cout << "Invalid route selected!" << endl;
                    break;
                }
                string name, code;
                int category;
                cout << "Enter Passenger Name: "; //prompts for passenger name
                getline(cin, name);
                cout << "Enter Confirmation Code: ";//prompts for passenger confirmation code
                getline(cin, code);
                cout << "Enter Discount Category: " << endl; //prompts for passenger discount if applied
                cout << "1: Online / Student: 15% " << endl;
                cout << "2: Military/Veteran: 10%" << endl;
                cout << "3: BUS_TRIPS Club Member: 20% " << endl;
                cin >> category;
                double discount = calculateDiscount(category);
                double price = distance * 0.5;
                double priceAfterDiscount = price - (price * discount);
                Ticket ticket(name, code, "Route Information", priceAfterDiscount, discount); //saves info entered into ticket information
                trip.addPassengerTicket(ticket);
                cout << "Ticket booked successfully!" << endl;
                cout << "Original Price: $" << price << endl;
                cout << "Discount: " << (discount * 100) << "%" << endl;
                cout << "Price After Discount: $" << priceAfterDiscount << endl;
                break;
            }
            case 4: { //option to cancel any ticket enetered with the ticket class by entering code
                string code;
                cout << "Enter Confirmation Code to Cancel Ticket: ";
                getline(cin, code);
                trip.cancelTicket(code);
                break;
            }
            case 5: //choice to display all tickets that have been entered into system
                trip.displayAllTickets();
                break;
            case 6: //option to exit out of code
                cout << "Exiting system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
double calculateDiscount(int category) { //function to calculate discount applied to ticket price
    double discount = 0.0;

    // Apply the discount based on the category chosen by the user
    switch (category) {
        case 1:  // Online / Student
            discount = 0.15;  // 15% discount
            break;
        case 2:  // Military / Veteran
            discount = 0.10;  // 10% discount
            break;
        case 3:  // BUS_TRIPS Club Member
            discount = 0.20;  // 20% discount
            break;
        default:
            cout << "Invalid category chosen. No discount applied." << endl;
            break;
    }

    return discount;
}