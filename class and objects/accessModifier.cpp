#include<bits/stdc++.h>

using namespace std;

class Player
{
 private:
    //attribute
    string name;
    int health;
    int xp;
 public:
    //methods

    bool is_dead();
    void talk(string text){cout<<name<<" says "<<text;}
};
int main()
{
    Player Abhi;
    Abhi.talk("hello abhishek");
}