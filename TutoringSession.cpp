#include "tutoringSession.h"

//parameterized constructor
TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student){
    //using this to point to the aattribute in order to initialize the parameter value passed
    this->sessionID = sessionID;
    this->durationMinutes = durationMinutes;
    this->ta = ta;
    this ->student = student;
}

//getters
double TutoringSession::getDuration(){
    return durationMinutes;
}
int TutoringSession::getSessionID(){
    return sessionID;
}
TeachingAssistant* TutoringSession::getTA(){
    return ta;
}
Student* TutoringSession::getStudent(){
    return student;
}
//displaying
void TutoringSession::displaySession(){
    cout<<"Session ID: "<<sessionID<<"\nDuration Minutes: "<<durationMinutes<<endl;
}
//operator overloading
TutoringSession TutoringSession::operator+(const TutoringSession& other){
    double totalDuration = this->durationMinutes + other.durationMinutes;
    return TutoringSession(this->sessionID,totalDuration,this->ta,this->student);
}
//non member
bool operator>(TutoringSession s1, TutoringSession s2){
    if(s1.getDuration()>s2.getDuration())
        return true;
    else
        return false;
}