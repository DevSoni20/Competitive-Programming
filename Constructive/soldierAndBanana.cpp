#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, w;
    cin>>k>>n>>w;
    int tc = (w*(w+1))/2;
    int ans = tc*k - n;
    if(ans <= 0){cout<<0<<endl;}
    else{cout<<ans<<endl;}
}