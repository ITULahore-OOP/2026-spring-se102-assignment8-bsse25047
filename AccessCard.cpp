#include "AccessCard.h"

//parameterized Constructor
AccessCard::AccessCard(string cardID, int accessLevel){
    //using this to point to the aattribute in order to initialize the parameter value passed
    this->cardID = cardID;
    this->accessLevel = accessLevel;
}

//getters
string AccessCard::getCardID(){
    return cardID;    //returning private attribute cardID
}
int AccessCard::getAccessLevel(){
    return accessLevel;    //returning private attribute accessLevel
}

//member fucntion
void AccessCard::displayCardInfo(){
    cout<<"Card ID: "<<cardID<<"\nAccess Level: "<<accessLevel<<endl;    //displaying info
}