#include <iostream>
#include <string>
using namespace std;
int main() {
    int choice;

   cout << "Welcome to the 777 Bus System! Take Ticket and Choose Options: " << endl;
    cout << "1. Book Bus Trip " << endl;
    cout << "2. Display Ticket Info " << endl;
    cout << "3. Get Off Bus" << endl;
    cout << "4. Exit" << endl;
cin >> choice;

switch(choice) {
    case 1: {
        string name, date, depart, arrival, distance, driver, code;
        int busModel;
        cout << "Enter Trip Details: " << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Date: ";
        getline(cin, date);
        cout << "Departing From: ";
        getline(cin, depart);
        cout << "Arriving At: ";
        getline(cin, arrival);
        cout << "Distance( in miles): ";
        getline(cin, distance);
        cout << "Driver: ";
        getline(cin, driver);
        cout << "Bus Model: ";
        cin >> busModel;
        cout << "Confirmation Code: ";
        getline(cin, code);
    }
    case 2: {
        string name, code;
        cout << "Enter name first to display ticket: ";
        getline(cin, name);
        cout << "Now, enter confirmation code to display ticket information: ";
        getline(cin, code);
        //function to display all ticket info will go here
    }
    case 3: {
        //save state for all ticekts entered
        cout << "Goodbye !- Jeremiah, Myles, Nikki (CFO, CEO, and Founder Of Transporters Inc. ";
    }
}
    return 0;
}
