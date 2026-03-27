#ifndef ACCESSCARD_H
#define ACCESSCARD_H
#include <iostream>
#include <string>
using namespace std;

class AccessCard{
        string cardID;
        int accessLevel; //(e.g., 1 for basic, 2 for labs);
    public:
        AccessCard(string cardID, int accessLevel);
        string getCardID();
        int getAccessLevel();
        void displayCardInfo();
};

#endif

