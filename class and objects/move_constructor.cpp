const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int func(int &&a ,int && b)
{
    return a + b;
}
int main()
{
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);

        cout<<func(10,30);
}