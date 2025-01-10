#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        long long a, b, c; 
        cin >> a >> b >> c;
        long long x1 = -1, x2 = -1;
        if (a < c) 
        {
            x1 = 1;
        }
        if (a * b > c)
        {
            x2 = b;
        }
        cout << x1 << " " << x2 << endl;
    }
    return 0;
}
