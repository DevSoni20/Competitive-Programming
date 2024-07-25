#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans = 0;
        if(n == 10000){cout<<1<<endl;cout<<10000<<endl;}
        else
        {
            vector<int>v;
            while(n/1000 > 0)
            {
                ans++;
                int val = n/1000;
                v.push_back(val*1000);
                n -= val*1000;
            }
            while(n/100 > 0)
            {
                ans++;
                int val = n/100;
                v.push_back(val*100);
                n -= val*100;
            }
            while(n/10 > 0)
            {
                ans++;
                int val = n/10;
                v.push_back(val*10);
                n -= val*10;
            }
            if(n != 0){ans++;}
            cout<<ans<<endl;
            for(auto it : v)
            {cout<<it<<" ";}
            if(n != 0)cout<<n<<endl;
        }
    }
    return 0;
}