#include <iostream>
#include <cmath>
#include <cstdlib>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,flag=1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]%2==1)
            {
                flag=0;
            }
        }
        sort(a,a+n);
        int mn=*min_element(a,a+n);
        int mx=*max_element(a,a+n);
        //cout<<mn<<endl;
        cout<<mx<<endl;
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else if(flag==0)
        {
            if(mn%2==1 and mn>0)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
                

    return 0;
}