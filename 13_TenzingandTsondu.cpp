#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    long long int k=0;
    for(int i=0;i<n;i++)
    {
        k=k+a[i];
    }
    long long int l=0;
    for(int i=0;i<m;i++)
    {
        l=l+b[i];
    }
    if(k>l)
    {
        cout<<"Tsondu"<<endl;
    }
    else if(l>k)
    {
        cout<<"Tenzing"<<endl;
    }
    else {
        cout<<"Draw"<<endl;
    }
}
return 0;
}