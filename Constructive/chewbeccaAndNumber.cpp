#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long ans = 0;
    vector<int>v;
    while(n > 0)
    {
        int num = n%10;
        n /= 10;
        if(num >= 5)
        {
            num = 9-num;
        }
        v.push_back(num);
    }
    reverse(v.begin(), v.end());
    if(v[0] == 0){v[0] = 9;}
    for(auto it : v)
    {
        ans = ans*10 + it;
    }
    cout<<ans<<endl;
}