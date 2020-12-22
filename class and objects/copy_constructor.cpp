#include<bits/stdc++.h>

using namespace std;

class Player
{
    private:
        string name;
        int health;
        int xp;
    public:
        string get_name(){return name;}
        void set_name(string s){name = s;}
        int get_health(){return health;}
        int get_xp(){return xp;}
        // constructor call
        Player(string name_n="None",int health_h=0,int xp_h= 0);

        //copy constructor
        Player(const Player &source);
        //destructor
        ~Player()
        {
            cout<<"Destructor has been called\n";
        }
        
};

Player::Player(string name_n,int health_h,int xp_h)
    :name{name_n},health{health_h},xp{xp_h}
    {
        cout<<"three arg construct called\n";
    }


// shallow copy 
Player::Player(const Player &source)
    :name{source.name},health{source.health},xp{source.xp}{
        cout<<"copy constructor has been called on "<< source.name<<endl;
    }


void display(Player P)
{
    cout<<P.get_name()<<" "<<P.get_health()<<P.get_xp()<<endl;
}
int main(){
    Player Empty;
    Empty.set_name("Abhishek");


    // display(Empty);

    Player john(Empty);
    // here every attribute are copied to john from Empty 

    display(john);
}