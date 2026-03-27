#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <string>
#include "UniversityMember.h"
#include "AccessCard.h"
using namespace std;

class Staff:virtual public UniversityMember{
    double salary;
	AccessCard card;
public:
    Staff(string name, int memberID, double salary, AccessCard card);
    double getSalary();
    AccessCard getCard();
    void displayRole() override;
    void displayCard();
};

#endif

