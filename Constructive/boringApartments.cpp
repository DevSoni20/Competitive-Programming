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
        int val = n%10;
        ans += (val-1)*10;
        int digitCount = 0;
        while(n > 0)
        {
            digitCount++;
            n /= 10;
        }
        if(digitCount == 4){ans += 10;}
        else if(digitCount == 3){ans += 6;}
        else if(digitCount == 2){ans += 3;}
        else{ans += 1;}
        cout<<ans<<endl;
    }
}