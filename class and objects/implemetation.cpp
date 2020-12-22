#include<bits/stdc++.h>

using namespace std;

class Account
{
    private:
        string name;
        double balance;

    public:

        // methods define using inline function
        void set_balance(double bal){balance = bal;};
        double get_balance(){return balance;}
        

        void set_name(string s);
        string get_name();

        // defined outside the class declartion

        bool deposite(double bal);
        bool withdraw(double bal);



};
void Account :: set_name(string s){
    name = s;
}
string Account::get_name(){
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
int main()
{


    Account *Acc{nullptr};

    Acc = new Account;

    Acc->set_name("abhishek");
    cout << Acc->get_name()<<endl;


    Acc->set_balance(2934.889);
    cout<< Acc->get_balance()<<"\n";

    cout << " " << Acc->withdraw(199)<<"\n";


    Account *child{nullptr};

    child = new Account;

    (*child).set_name("penny the laywer");
    cout<< (*child).get_name();

    Account frank;

    frank.set_name("frank");
    cout<< frank.get_name()<<endl;

    frank.set_balance(5000);

    if(frank.withdraw(4500))
    {
        cout<<"withdraw successful\n";
    }
    else 
        cout<<"Not sufficient\n";

    


}