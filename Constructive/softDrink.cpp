#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totalDrink = k*l;
    int totalLimeSlices = c*d;
    int requiredDrinkForOneGroup = n*nl;
    int requiredSaltForOneGroup = n*np;
    int requiredLimeSlicesForOneGroup = n;
    int ans = 0;
    while(totalDrink >= requiredDrinkForOneGroup && totalLimeSlices >= requiredLimeSlicesForOneGroup && p >= requiredSaltForOneGroup)
    {
        ans++;
        totalDrink -= requiredDrinkForOneGroup;
        totalLimeSlices -= requiredLimeSlicesForOneGroup;
        p -= requiredSaltForOneGroup;
    }
    cout<<ans<<endl;
}