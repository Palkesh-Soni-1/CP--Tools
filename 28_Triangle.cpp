#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+b>c&&b+c>a&&a+c>b)||(a+b>d&&b+d>a&&a+d>b)||(c+b>d&&b+d>c&&c+d>b)||(a+c>d&&c+d>a&&a+d>c))
    {
        cout<<"TRIANGLE"<<endl;
    }
    // else if((a+b<c&&b+c<a&&a+c<b)||(a+b<d&&b+d<a&&a+d<b)||(c+b<d&&b+d<c&&c+d<b)||(a+c<d&&c+d<a&&a+d<c))
    // {
    //     cout<<"IMPOSSIBLE"<<endl;
    // }
    else if(a+b==c||b+c==a||a+c==b||a+b==d||b+d==a||a+d==b||c+b==d||b+d==c||c+d==b||a+c==d||c+d==a||a+d==c)
    {
        cout<<"SEGMENT"<<endl;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
return 0;
}