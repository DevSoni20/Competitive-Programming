#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(7);
    for(int i = 0 ; i < 7 ; i++)
    {
        cin>>v[i];
    }
    int i = 0;
    while(n > v[i])
    {
        n -= v[i];
        i++;
        i = i%7;
    }
    cout<<i+1<<endl;
    return 0;
}