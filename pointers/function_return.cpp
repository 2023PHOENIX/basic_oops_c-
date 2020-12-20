#include<bits/stdc++.h>

using namespace std;

int * find_max(int *a , int *b)
{
    if(*a > *b)
        return a;
// we can pass the pointers and can also get pointer a &b in return 
    else 
        return b;
}

int find_max2(int *a,int *b)
{

    // here we are returning the pointer with dereferncing
    if(*a <*b)
        return *b;
    else 
        return *a;
}
int main()
{
    int a{100},b{200};

    auto num = find_max(&a,&b);

    cout<<*num<<endl;
    cout<<find_max(&a,&b);
    cout<<"\n"<<find_max2(&a,&b);


}