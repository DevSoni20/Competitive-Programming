#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int, int>>vp;
    for(int i = 1 ; i <= n ; i++)
    {
        int a;
        cin>>a;
        vp.push_back({a, i});
    }
    sort(vp.begin(), vp.end());
    for(int i = 0 ; i < n ; i++)
    {
        cout<<vp[i].second<<" ";
    }
    return 0;
}