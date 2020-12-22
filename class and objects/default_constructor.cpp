#include<bits/stdc++.h>

using namespace std;

class Player
{
    private:
        string name;
        int health;
        int xp;
    public:
        void set_name(string s){name = s;}
        string get_name(){ return name;}

        Player()
        {
            name = "NONE";
            health = 100;
            xp = 3;
        }

        // overloaded constructor

        Player(string name_val,int health_val,int xp_val){
            name = name_val;
            health = health_val;
            xp = xp_val;

        }
};


int main()
{
    Player frank;
    //default constructor will be called 

    frank.set_name("Abhishek");
    cout<<frank.get_name()<<endl;

    Player *hero{nullptr};

    hero = new Player{"abhi",110,3};
    cout<<hero->get_name();
}