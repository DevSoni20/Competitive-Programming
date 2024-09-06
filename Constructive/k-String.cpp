#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    int n = s.size();
    map<char, int>mp;
    for(auto it : s)
    {
        mp[it]++;
    }
    bool flag = false;
    for(auto it : mp)
    {
        if(it.second%k != 0){cout<<-1<<endl;flag = true;break;}
    }
    if(!flag)
    {
        string ans = "";
        string res = "";
        vector<pair<int, int>>v;
        for(auto it : mp){
            v.push_back({it.first, it.second/k});
        }
        for(int i = 0 ; i < v.size() ; i++)
        {
            int freq = v[i].second;
            char ch = v[i].first;
            while(freq--)
            {
                res += ch;
            }
        }
        while(k--)
        {
            ans += res;
        }
        cout<<ans<<endl;
    }
}