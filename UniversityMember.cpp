#include "UniversityMember.h"

//parameterized constructor
UniversityMember::UniversityMember(string name, int memberID){
    this->name = name;    //using this to point to the aattribute in order to initialize the parameter value passed
    this->memberID = memberID;
}

//destructor
UniversityMember::~UniversityMember(){
    cout<<"universityMember destructor activated!"<<endl;
}
//getters
string UniversityMember::getName(){
    return name;    //returning private attribute name
}
int UniversityMember::getMemberID(){
    return memberID;    //returning private attribute memberID
}