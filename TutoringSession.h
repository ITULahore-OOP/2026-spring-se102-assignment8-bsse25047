#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H
#include <iostream>
#include <string>
#include "TeachingAssistant.h"
#include "Student.h"
using namespace std;

class TutoringSession{
    int sessionID;
	double durationMinutes;
	TeachingAssistant* ta;
	Student* student;

public:
	TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student);
	double getDuration();
	int getSessionID();
	TeachingAssistant* getTA();
	Student* getStudent();
	void displaySession();
	TutoringSession operator+(const TutoringSession& other);
};
//non member
bool operator>(TutoringSession s1, TutoringSession s2);

#endif

