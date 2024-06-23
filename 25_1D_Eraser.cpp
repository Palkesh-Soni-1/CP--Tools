#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
 int n,k,l=0,m;
 cin>>n>>k;
 string s;
 cin>>s;
 for(int i=0;i<n;i++)
 {
    if(s[i]=='B')
    {
        l++;
        m=i;
        for(int j=m+1;j<(k+m);j++)
        {
            if(s[j]=='B')
            {
                i=j;
            }
        }

    }
 }
 cout<<l<<endl;
}
return 0;
}