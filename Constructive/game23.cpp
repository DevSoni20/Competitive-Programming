#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    if(n == m){cout<<0<<endl;return 0;}
    int res = -1;
    if(m%n == 0)
    {
        m = m/n;
        res = 0;
        while(m%2 == 0){res++;m /= 2;}
        while(m%3 == 0){res++;m /= 3;}
        if(m != 1){res = -1;}
    }
    cout<<res<<endl;
}