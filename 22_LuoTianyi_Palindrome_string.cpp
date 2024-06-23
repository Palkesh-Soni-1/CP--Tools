#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int j = s.length();
        int n = s.length();
        int i=0;
        // cout<<s[0]<<s[1]<<endl;
        while(i<j)
        {
            if(s[i]==s[j-1])
           {
                
                i++;
           }
        //    else if(i==)
           else{
            cout<<n-i<<endl;
            break;
           }
        }
        if(i==j)
           {
            cout<<"-1"<<endl;
           }
        // for (int i = 0; i < s.length();)
        // {
        //    if(s[i]==s[j])
        //    {
        //         i++;
        //    }
        //    else{
        //     cout<<n-i<<endl;
        //    }
        // }
    }
    return 0;
}