#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[3];
        // string a;
        // getline(cin,a);
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        if (a[0] == 'a' || a[1] == 'b' || a[2] == 'c')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}