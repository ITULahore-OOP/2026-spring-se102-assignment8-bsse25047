#include <iostream>
#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"
#include "UniversityMember.h"
using namespace std;

int main(){
  /* In the main() function:
    Create multiple AccessCard, Student, Staff, and TeachingAssistant objects.
    Add them to a Department object and invoke displayAllRoles() to prove run-time polymorphism works.
    Demonstrate compile-time polymorphism by calling both versions of gradeAssignment().
    Create two TutoringSession objects and demonstrate both the + and > operator overloads.
  */

    AccessCard card1("25023", 1);
    AccessCard card2("25031", 2);
    Student s1("Ahmed",2312, 3.40);
    Student s2("Ali",1243, 3.52);
    Staff staff1("Mustafa",5432,1000.23,card1);
    Staff staff2("Sana",7654,2300.34,card2);
    TeachingAssistant ta1("Eman",9876,3.86,200.98,card2,5);
    TeachingAssistant ta2("Hina",6732,2.86,100.23,card1,3);

    Department dept("Engineering");
int choice;
do{
    cout<<"\n1. Add member in the Department"<<endl;
    cout<<"2. Grade Assignments"<<endl;
cout<<"3. Use of operator overloading"<<endl;
cout<<"4. Display All roles"<<endl;
cout<<"0. Exit"<<endl;
cin>>choice;


switch(choice){

case 0:
{
cout<<"Exiting"<<endl;
break;
}

    case 1:
{
cout<<"==========================================="<<endl;
cout<<"               ADD MEMBER"<<endl;
cout<<"==========================================="<<endl;
    dept.addMember(&s1);
    dept.addMember(&s2);
    dept.addMember(&ta1);
    dept.addMember(&ta2);
    dept.addMember(&staff1);
    dept.addMember(&staff2);
cout<<"Members has been successfully added!"<<endl;
cout<<"\n-----------------------------------------------------"<<endl;
    break;
}

    case 2:
{
    cout<<"==========================================="<<endl;
    cout<<"               Grade Assignments"<<endl;
    cout<<"==========================================="<<endl;
int task;
cout<<"1. Numeric score grade\n2. Letter Grade\n3. To exit enter any other integer"<<endl;
cout<<"Enter choice: ";
cin>>task;
if(task == 1){
int score;
cout<<"Enter Score: ";
cin>>score;
    ta1.gradeAssignment(score);
}
else if(task == 2){
string grade;
cout<<"Enter letter grade: ";
cin>>grade;
    ta1.gradeAssignment(grade);
}
else{
cout<<"Exiting Grading assignments..."<<endl;
break;
}
cout<<"\n-----------------------------------------------------"<<endl;
    break;
}

    case 3:
{
    cout<<"==========================================="<<endl;
    cout<<"             OPERATOR OVERLOADING"<<endl;
    cout<<"==========================================="<<endl;
    TutoringSession session1(12,45.30,&ta2,&s2);
    TutoringSession session2(23,50.00,&ta1,&s1);
int enter;
cout<<"1. For + operator overloading\n2. For > operator overloading\n3. Any integer to exit"<<endl;
cin>>enter;
if(enter == 1){
 cout<<"Session 1 duration time: "<<session1.getDuration()<<endl;
 cout<<"Session 2 duration time: "<<session2.getDuration()<<endl;

    TutoringSession merged = session1 + session2;
    cout<<"Merged: "<<merged.getDuration();
}
else if(enter == 2){
    if(session1>session2)
        cout<<"Tutoring Session 1 is loger than tutoring session 2"<<endl;
    else
        cout<<"Tutoring Session 2 is loger than tutoring session 1"<<endl;
}

cout<<"\n-----------------------------------------------------"<<endl;
    break;
}

    case 4:
{
    cout<<"==========================================="<<endl;
    cout<<"              DIAPLY ALL ROLES"<<endl;
    cout<<"==========================================="<<endl;
    dept.displayAllRoles();
cout<<"\n-----------------------------------------------------"<<endl;
    break;
}

default:
{
cout<<"Invalid option selected!"<<endl;
break;
}

}
}while(choice !=0);
return 0;
}
