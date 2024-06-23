#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n];
        cin >> s;
        // for(int i=0;i<n;i++)
        // {
        //     cin>>s[i];
        // }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<s[i];
        // }
        // cout<<endl;
        int k = 0;
        for (int j = 1; j < n; j++)
        {
            if (s[k] == s[j])
            {
                cout << s[j];
                // cout<<j<<endl;
                k = j + 1;
                j = j + 1;
            }
        }
        cout << endl;
    }
    return 0;
}