#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int z=0;
    for(int i=0;i<n;i++)
    {
            if(a[i+1]>=a[i])
            {
                z++;
            }
    }
    int l;
    if(z==n)
    {
        l=1;
    }
    else{
        l=0;
    }
    int k=1;
    if(l==0)
    {
    while(k<=16)
    {
        if(a[k-1]>a[k])
        {
            int x = a[k-1]-a[k];
            for(int i=0;i<k;i++)
            {
                a[i]=a[i]-x;
            }
        }
        else if(a[k+1]<a[k])
        {
            int d = a[k]-a[k+1];
            for(int i=0;i<=k;i++)
            {
                a[i]=a[i]-d;
            }
            k=2*k;
        }
        else{
            k = 2*k;
        }
    }
    }
    z=0;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
            if(a[i+1]>=a[i])
            {
                z++;
            }
    }
    if(z==n)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
 return 0;
}