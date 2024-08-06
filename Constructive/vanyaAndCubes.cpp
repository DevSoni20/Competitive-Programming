#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;
    int required = 0;
    while(n >= required)
    {
        required += i;
        n = n - required;
        i++;
    }
    i--;
    if(n < 0){i--;}
    cout<<i<<endl;
}