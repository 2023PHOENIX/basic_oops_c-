#include<bits/stdc++.h>
#include "Account.h"


using namespace std;

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