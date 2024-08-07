#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans = "";
    int count = 1, i = 0;
    while(i < n)
    {
        ans += s[i];
        i += count;
        count++;
    }
    cout<<ans<<endl;
}