#include<bits/stdc++.h>

using namespace std;

int * apply_all(int *arr1,int *arr2,int n,int m)
{
    int *myarray = new int[n*m];
    size_t z{0};
    for(size_t i=0;i<n;i++)
     {   for(size_t j=0;j<m;j++)
        {
            myarray[z++] = arr1[i]*arr2[j];
        }
     }
     return myarray;
}

int main()
{
    int *arr1{nullptr};
    int *arr2{nullptr};


    
    size_t n,m;    cin>>n>>m;

    arr1 = new int[n];
    arr2 = new int[m];

    for(size_t i=0;i<n;i++)
        cin>>arr1[i];
    for(size_t j=0;j<m;j++)
        cin>>arr2[j];

    int *arr = apply_all(arr1,arr2,n,m);

    for(size_t i=0;i<m*n;i++)
        cout<<arr[i]<<" ";

    delete [] arr;

    
    
}