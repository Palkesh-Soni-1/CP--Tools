#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k=0;
        string s;
        cin>>s;
        string p = "codeforces";
        for(int i=0;i<10;i++)
        {
            if(s[i]!=p[i])
            {
                k++;
            }
        }
        cout<<k<<endl;
        
    }

return 0;
}