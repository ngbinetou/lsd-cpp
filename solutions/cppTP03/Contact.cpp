#include<iostream>
#include "Contact.hpp"

using namespace std;




contact::contact(): firstName("	"),lastName("	"),nickName("	"),phoneNumber("	"){}
contact::contact(string firstName,string lastName,string nickName, string PhoneNumber):firstName(firstName),lastName(lastName),nickName(nickName),phoneNumber(phoneNumber){}



