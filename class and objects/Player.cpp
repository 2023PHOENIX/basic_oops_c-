#include<bits/stdc++.h>

using namespace std;

class Player
{
    // attributes 
    string name{"abhishek"};
    int health{100};
    int xp{3};

    //methods
  bool is_dead();
  void talk(string);

};

class Account
{
    //attribute 
    string name{"Player"};
    double balance{0.00};


    //methods
    bool deposite(double);
    bool withdraw(double);

};
int main()
{

    Player frank;
    Player hero;

    Account frank_account;
    Account hero_account;


    Player *Enemy{nullptr};


    vector<Player> player_v{hero};

    player_v.push_back(frank);



    Enemy = new Player;

    delete Enemy;



}
