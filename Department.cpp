#include "Department.h"

//parameterized constructor
Department::Department(string departmentName):departmentName(departmentName){
    memberCount = 0;
}
//add member
void Department::addMember(UniversityMember* member){
    if(memberCount<50){    //make sure members are less than 50
        members[memberCount] = member;    //adding member
        memberCount++;    //incrementing
    }
    else
        cout<<"Members cant be above 50!"<<endl;
}

void Department::displayAllRoles(){    //displaying all roles
    for(int i = 0; i<memberCount; i++){
        members[i]->displayRole();
    }
}
