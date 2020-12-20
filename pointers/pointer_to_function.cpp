#include<bits/stdc++.h>

using namespace std;

void double_value(int *ptr)
{
    *ptr = *ptr * 2;
}
// pass pointer to function
int main()
{
    int value {10};

    int *P{&value};

    double_value(P);

    cout<<*P<<endl;
}