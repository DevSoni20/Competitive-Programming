#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        vector<vector<char>>v(n, vector<char>(m));
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cin>>v[i][j];
            }
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                queue<pair<int, int>>q;
                q.push({i, j});
                while(!q.empty())
                {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    if(v[x][y] == 'R')
                    {
                        if(y+1 == m)
                        {
                            ans++;
                            v[x][y] = 'D';
                        }
                        else
                        {q.push({x, y+1});}
                    }
                    else if(v[x][y] == 'D')
                    {
                        if(x+1 == n)
                        {
                            ans++;
                            v[x][y] = 'R';
                        }
                        else{q.push({x+1, y});}
                    }
                    else{break;}
                }
            }
        }
        cout<<ans<<endl;
    }
}