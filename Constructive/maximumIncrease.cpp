#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>v[i];
    }
    int ans = 1, curr = 1;
    for(int i = 1 ; i < n ; i++)
    {
        if(v[i] > v[i-1])
        {
            curr++;
            ans = max(curr, ans);
        }
        else{curr = 1;}
    }
    cout<<ans<<endl;
}