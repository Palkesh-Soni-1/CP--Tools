#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
int x=m,y=0,z,k=0,l=n,w;
cin>>n>>m;
char a[n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(a[i][j]=='*')
        {
            if(i>=k)
            {
                z=i;
                //cout<<z<<" ";
                k=100;
            }
            else if(i<l)
            {
                w=i;
            }
          // cout<<z<<" ";
            // if(j<x)
            // {
            //     x=j;
            // }
            // else if(j>y)
            // {
            //     y=j;
            // }
        }
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(a[i][j]=='*')
        {
          // cout<<z<<" ";
            if(j<=x)
            {
                x=j;
            }
            else if(j>y)
            {
                y=j;
            }
        }
    }
}
cout<<z<<w<<x<<y<<endl;
for(int i=z;i<=w;i++)
{
    for(int j=x;j<=y;j++)
    {
        cout<<a[i][j];
    }
    cout<<endl;
}
return 0;
}    