#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    vector<int>v = {a, b, c};
    sort(v.begin(), v.end());
    int ans = v[2]-v[1] + v[1]-v[0];
    cout<<ans<<endl;
}