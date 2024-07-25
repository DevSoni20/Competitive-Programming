#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    vector<vector<char>>v(n, vector<char>(m, '.'));
    bool even = true, first = true;
    for(int i = 0 ; i < n ; i++)
    {
        if(even)
        {
            for(int j = 0 ; j < m ; j++)
            {v[i][j] = '#';}
        }
        else
        {
            if(first)
            {
                v[i][m-1] = '#';
            }
            else{
                v[i][0] = '#';
            }
            first = !first;
        }
        even = !even;
    }
    for(int i = 0 ; i < n ; i++)
    {
        string s = "";
        for(int j = 0 ; j < m ; j++)
        {
            s += v[i][j];
        }
        cout<<s<<endl;
    }
    return 0;
}