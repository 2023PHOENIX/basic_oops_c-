#include<bits/stdc++.h>

using namespace std;

int * make_array(size_t size , int value)
{
    int * arr = new int[size];
    for(int i=0;i<size;i++)
        arr[i] = value;

    // simply return the array pointer;
    return arr;
}

void display(const int *const A , int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<< " ";
    }
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<*(A+i)<< " ";
    }
}
int main()
{
    int *myarray{nullptr};

    size_t size;

    int value;  cin>>size>>value;

    myarray = make_array(size,value);

    display(myarray,size);

}