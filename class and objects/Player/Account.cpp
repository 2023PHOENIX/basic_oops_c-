#include "Account.h"



void Account :: set_name(std::string s){
    name = s;
}
std::string Account::get_name(){
    return name;
}

bool Account::deposite(double bal){
    balance += bal;
    return true;
}
bool Account:: withdraw(double bal)
{
    if(balance >= bal)
          {  balance -= bal;
            return true;
          }
    return false;

}

