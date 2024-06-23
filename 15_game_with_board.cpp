#include<iostream>
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
        a[i]=1;
    }
    if(n==2||n==3||n==4)
    {
        cout<<"Bob"<<endl;
    }
    else 
    {
        cout<<"Alice"<<endl;
    }
}
return 0;
}