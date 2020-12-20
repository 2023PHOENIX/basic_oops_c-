#include<bits/stdc++.h>

using namespace std;

void display(vector<string> *A) // if i pass const on vector so i can't modify the values
                                // or i pass const with (*A) i am not able to pass A nullptr
{
    (*A).at(0) = "Funny";

    for(auto name : *A)
    { 
        cout<<name<<endl;
    }

    A = nullptr;
    
}
int main()
{
    vector<string> v{"Abhishek","achal","Dev"};

    display(&v);
}