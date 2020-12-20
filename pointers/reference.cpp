#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> names{"abhishek","achal","dev"};

    for(auto name : names)      // name is a copy of each element in names
        {
            name = "funny";
        }
    for(auto name : names)
        {
            cout<<name<<" ";        // no change happened here
        }
    
    cout<<endl;
    for(auto &name : names)      // here name is reference to each element
    {
        name = "funny";
    }
    for(auto const &name : names)       // here no copy and change can be made const and & reference
        cout<<name<<" ";

}