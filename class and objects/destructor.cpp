#include<bits/stdc++.h>

using namespace std;

class Player{
    private:
        string name;
        int health;
        int xp;
    public:
       void  set_name(string s){ name = s; }

    Player()
    {
        cout<<"default constructor call\n";
    }
    Player(string name,int health)
    {
        cout<<"two args constructor call\n";
    }
    Player(string name,int health , int xp)
    {
        cout<<"Three args constructor call\n";
    }
    ~Player()
    {
        cout<<"destrutor called for "<< name<<endl;
    }
};


int main()
{
    Player frank;
    frank.set_name("frank");

    Player Abhi("abhishek",100,12);\
    Abhi.set_name("abhishek");

    Player *enemy{nullptr};

    enemy = new Player;
    enemy->set_name("dev\n");

    delete enemy;

}