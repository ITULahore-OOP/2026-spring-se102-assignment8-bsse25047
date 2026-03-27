#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours):UniversityMember(name,memberID),Student(name,memberID,cgpa),Staff(name,memberID,salary,card),workingHours(workingHours){
}
//displaying
void TeachingAssistant::displayRole(){
    cout<<"Role: Teaching Assistant"<<"\nTeaching Assistant Name: "<<getName()<<"\nTeaching Assistant memberID: "<<getMemberID()<<"\nTeachingAssistance CGPA: "<<getCGPA()<<"\nTeaching Assistance Salary: "<<getSalary()<<"\nTeachingAssistance card ID: "<<getCard().getCardID()<<"Teaching Assitance Access level: "<<getCard().getAccessLevel()<<"\nTeaching Assistant working Hours: "<<workingHours<<endl;
}

void TeachingAssistant::gradeAssignment(int score){
    cout<<"numeric score: "<<score<<"/100"<<endl;    //numeric score display
}

void TeachingAssistant::gradeAssignment(string letterGrade){
    cout<<"letter grade: "<<letterGrade<<endl;    //display grade
}