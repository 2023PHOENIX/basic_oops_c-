#include<bits/stdc++.h>

using namespace std;

class Player
{
    public:
        // attributes
        string name;
        int health;
        int xp;

        // methods
        void talk(string o_talk){cout<<name<< " says "<< o_talk;}
        bool is_dead();
};
class Account
{
    public:
        string name;
        double balance;

    bool deposite(double bal){balance += bal; return true;}
    bool withdraw(double bal){balance -= bal; return true;}



};
int main()
{
 Player frank;

 frank.name = "Frank";
 frank.health = 100;
 frank.xp = 12;

 frank.talk("abhishek is here\n");

 Player *Abhishek{nullptr};

 Abhishek = new Player;
 
 (*Abhishek).name = "Abhishek";     
 (*Abhishek).health = 120;
 (*Abhishek).xp = 3;

(*Abhishek).talk("Virat is here\n");

Player *Virat{nullptr};

Virat = new Player;

Virat->name = "Virat";  // either we can use "->" or deference pointer
Virat->health = 122;
Virat->xp = 3;

Virat->talk("No one is here");

Account frank_account;

frank_account.name =  "frank account";
frank_account.balance = 1000;

frank_account.deposite(200);
frank_account.withdraw(100);




}
