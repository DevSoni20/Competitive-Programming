#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string ans = "";
    unordered_set<char>st;
    st.insert('A');
    st.insert('a');
    st.insert('E');
    st.insert('e');
    st.insert('I');
    st.insert('i');
    st.insert('O');
    st.insert('o');
    st.insert('U');
    st.insert('u');
    st.insert('Y');
    st.insert('y');
    int n = s.size();
    for(int i = 0 ; i < n ; i++)
    {
        char ch = s[i];
        if(st.find(ch) == st.end())
        {
            ans += '.';
            if(ch > 'A' && ch <= 'Z')
            {
                ans += tolower(ch);
            }
            else{
                ans += ch;
            }
        }
    }
    cout<<ans<<endl;
}