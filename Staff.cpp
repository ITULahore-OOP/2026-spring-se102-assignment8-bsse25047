#include "Staff.h"

//parameterized constructor
Staff::Staff(string name, int memberID, double salary, AccessCard card):UniversityMember(name,memberID),salary(salary),card(card){
}

//getter
double Staff::getSalary(){
    return salary;    //returning private attribute salary
}

AccessCard Staff::getCard(){
    return card;    //returning private attribute card
}

//member function
void Staff::displayRole(){        //Overrides base class function
    cout<<"Role: Staff"<<"Staff name: "<<getName()<<"\nStaff member ID: "<<getMemberID()<<"\nSalary: "<<salary<<endl;
}

void Staff::displayCard(){
    cout<<"Staff Card ID: "<<card.getCardID()<<"\nStaff Card Access Level: "<<card.getAccessLevel()<<endl;
}