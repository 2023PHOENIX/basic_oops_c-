#include<bits/stdc++.h>

using namespace std;


class Player
{
    private:
        string name;
        int health;
        int xp;

    public:
        Player();
        Player(string n);
        Player(string n_v,int health_v,int xp_v);

};
Player::Player()
    :Player{"None",100,3}
    {
        cout<<"default constructor\n";
    }
Player::Player(string s)
    :Player{s,0,0}
    {
        cout<<"one-valued constructor\n";
    }
Player::Player(string s,int health_v,int xp_v)
    :name{s},health{health_v},xp{xp_v}
    {
        cout<<"3 arg constructor is been called\n";
    }

int main()
{
    Player john;
    Player *point{nullptr};

    point = new Player("abhishek",120,3);

    delete point;

    Player *ne{nullptr};
    ne = new Player("abhi");
    delete ne;



}