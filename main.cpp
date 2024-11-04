#include "Ticket.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void displayMenu();
void bookBusTrip(vector<Ticket>& tickets);
void displayTicketInfo(const vector<Ticket>& tickets);
int main() {
    vector<Ticket> tickets;
    int choice;

    cout << "Welcome to the 777 Transporters Bus System! Take Ticket and Choose Options: " << endl;

    do {
        displayMenu();
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                bookBusTrip(tickets);
                break;
            case 2:
                displayTicketInfo(tickets);
                break;
            case 3:
                cout << "Goodbye! - Jeremiah, Myles, Nikki (CFO, CEO, and Founder Of Transporters Inc.)" << endl;
                cout << "Thank you for using the 777 Bus System!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

void displayMenu() {
    cout << "\nMenu:" << endl;
    cout << "1. Book Bus Trip " << endl;
    cout << "2. Display Ticket Info " << endl;
    cout << "3. Get Off Bus" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

void bookBusTrip(vector<Ticket>& tickets) {
    string name, date, depart, arrival, distance, driver, code;
    int busModel;

    cout << "Enter Trip Details: " << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "Date: ";
    getline(cin, date);
    cout << "Departing From: ";
    getline(cin, depart);
    cout << "Arriving At: ";
    getline(cin, arrival);
    cout << "Distance (in miles): ";
    getline(cin, distance);
    cout << "Driver: ";
    getline(cin, driver);
    cout << "Bus Model: ";
    cin >> busModel;
    cin.ignore();
    cout << "Confirmation Code: ";
    getline(cin, code);

    tickets.emplace_back(name, date, depart, arrival, distance, driver, busModel, code);
    cout << "Ticket booked successfully!" << endl;
}
void displayTicketInfo(const vector<Ticket>& tickets) {
    string name, code;
    cout << "Enter name to display ticket: ";
    getline(cin, name);
    cout << "Enter confirmation code to display ticket information: ";
    getline(cin, code);

    bool found = false;
    for (const auto& ticket : tickets) {
        if (ticket.displayTicketInfo(name,code)) {
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "No ticket found with the provided information." << endl;
    }
}

