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
    int maxi = *max_element(v.begin(), v.end());
    int mini = *min_element(v.begin(), v.end());
    int ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(v[i] == maxi)
        {
            int j = i;
            while(j-1 >= 0)
            {
                swap(v[j], v[j-1]);
                j--;
                ans++;
            }
            break;
        }
    }
    int ind = -1;
    for(int i = 0 ; i < n ; i++)
    {
        if(v[i] == mini){ind = i;}
    }
    int dis = n-ind-1;
    cout<<ans+dis<<endl;
}