#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>ans;
    int n;
    cin>>n;
    for(int i = 0 ; i <= n ; i++)
    {
        int val = i;
        int j = 0;
        vector<int>v;
        while(j <= val)
        {
            v.push_back(j++);
        }
        j--;
        while(j > 0)
        {
            v.push_back(--j);
        }
        ans.push_back(v);
    }
    for(int i = n-1 ; i >= 0 ; i--)
    {
        vector<int>v = ans[i];
        ans.push_back(v);
    }
    int space = n*2;
    bool flag = false;
    for(int i = 0 ; i < ans.size() ; i++)
    {
        int k = 0;
        while(k < space)
        {
            cout<<" ";
            k++;
        }
        int size = ans[i].size();
        for(int j = 0 ; j < size-1 ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<ans[i][size-1]<<endl;
        if(space > 0 && !flag)
        {space -= 2;}
        else{space += 2;flag = true;}
    }
    return 0;
}