#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int val = 0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[1] == '+'){val++;}
        else{val--;}
    }
    cout<<val<<endl;
}