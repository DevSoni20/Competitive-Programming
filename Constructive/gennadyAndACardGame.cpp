#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<string>v;
    for(int i = 0 ; i < 5 ; i++)
    {
        string t;
        cin>>t;
        v.push_back(t);
    }
    bool flag = false;
    for(int i = 0 ; i < 5 ; i++)
    {
        if(s[0] == v[i][0] || s[1] == v[i][1]){flag = true;break;}
    }
    if(flag){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    return 0;
}