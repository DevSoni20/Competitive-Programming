#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>mat(5, vector<int>(5));
    int indI = -1, indJ = -1;
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            cin>>mat[i][j];
            if(mat[i][j] == 1)
            {
                indI = i;
                indJ = j;
            }

        }
    }
    int ans = abs(2-indI)+abs(2-indJ);
    cout<<ans<<endl;
}