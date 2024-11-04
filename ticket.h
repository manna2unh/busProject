//
// Created by m_ann on 11/4/2024.
//

#ifndef BUSPROJECT_TICKET_H
#define BUSPROJECT_TICKET_H

#include <string>
using namespace std;
class Ticket {
public:
    Ticket(const string& name, const string& date, const string& depart, const string& arrival,
           const string& distance, const string& driver, int busModel, const string& code);

    bool displayTicketInfo(const string& name, const string& code) const;

private:
    string name;
    string date;
    string depart;
    string arrival;
    string distance;
    string driver;
    int busModel;
   string code;
};

#endif //BUSPROJECT_TICKET_H
