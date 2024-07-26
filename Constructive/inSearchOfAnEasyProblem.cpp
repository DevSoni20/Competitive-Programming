#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag = false;
    while(n--)
    {
        int i;
        cin>>i;
        if(i == 0){continue;}
        else{flag = true;break;}
    }
    if(!flag){cout<<"EASY"<<endl;}
    else{cout<<"HARD"<<endl;}
    return 0;
}