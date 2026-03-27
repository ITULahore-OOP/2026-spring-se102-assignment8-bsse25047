#include "Student.h"

//parameterized conatructor
Student::Student(string name, int memberID, double cgpa):UniversityMember(name,memberID),cgpa(cgpa){
}

//getter
double Student::getCGPA(){
    return cgpa;    //returning private attribute cgpa
}

//member functions
void Student::updateCGPA(double newCGPA){
    cgpa = newCGPA;    //initializing current cgpa to new cgpa
}

void Student::displayRole(){   //Overrides base class function
//displaying required info
    cout<<"Role: Student";
    cout<<"\nStudent Name: "<<getName()
    <<"\nStudent member ID: "<<getMemberID()
    <<"\nStudent CGPA: "<<cgpa<<endl;
}