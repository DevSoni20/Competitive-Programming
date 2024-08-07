#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans = 0;
        int lOI = -1, oOI = -1;
        int n = s.size();
        int i = n;
        while(i >= 0)
        {
            if(s[i] == '1'){lOI = i;break;}
            i--;
        }
        i = 0;
        while(i < n)
        {
            if(s[i] == '1'){oOI = i;break;}
            i++;
        }
        for(i = oOI+1 ; i < lOI ; i++)
        {
            if(s[i] == '0'){ans++;}
        }
        cout<<ans<<endl;
    }
}