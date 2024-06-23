#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,x=0,k=0;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // for(int i=0;i<n-1;)
    // {
    //     int j=i+1;
    //     if(a[i]>=a[j])
    //     {
    //         a[j]=a[j]+d;
    //         k++;
    //     }
    //     else 
    //     {
    //         i++;
    //     }
    // }
    for(int i=0;i<n-1;i++)
    {
        int j=i+1;
        if(a[i]>=a[j])
        {
            if(a[i]==a[j])
            {
                a[j]=a[j]+d;
                x=1;
                k=k+1;
            }
           else if(a[i]>a[j]){
            x = (a[i]-a[j])/d+1;
            k = k+x;
            a[j]=a[j]+d*x;
           }  
        }
    }
    cout<<k<<endl;
    return 0;
}