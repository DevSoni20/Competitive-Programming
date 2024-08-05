#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<char>v;
    for(auto it : s)
    {
        if(it != '+')
        {
            v.push_back(it);
        }
    }
    sort(v.begin(), v.end());
    s = "";
    int n = v.size();
    for(int i = 0 ; i < n-1 ; i++)
    {
        s += v[i];
        s += "+";
    }
    s += v[n-1];
    cout<<s<<endl;
}