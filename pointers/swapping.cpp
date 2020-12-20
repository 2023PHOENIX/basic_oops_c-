#include<bits/stdc++.h>

using namespace std;

// actually first passed with address and 
// stored by pointer whom we can change the values

void swap(int * x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a{10},b{20};

    cout<<"before swap"<<a<<" "<<b<<endl;

    swap(&a,&b);

    cout <<"After swap"<<a<<" "<<b<<endl;
}