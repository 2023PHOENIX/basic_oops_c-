#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include<string>


class Account
{
    private:
        std::string name;
        double balance;

    public:

        // methods define using inline function
        void set_balance(double bal){balance = bal;};
        double get_balance(){return balance;}
        

        void set_name(std::string s);
        std::string get_name();

        // defined outside the class declartion

        bool deposite(double bal);
        bool withdraw(double bal);



};
#endif // _ACCOUNT_H
