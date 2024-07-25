#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans = 0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[0] == 'I'){ans += 20;}
        else if(s[0] == 'D'){ans += 12;}
        else if(s[0] == 'O'){ans += 8;}
        else if(s[0] == 'C'){ans += 6;}
        else{ans += 4;}
    }
    cout<<ans<<endl;
}