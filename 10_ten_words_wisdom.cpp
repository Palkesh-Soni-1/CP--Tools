#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,j,k=1;
    cin>>n;
    int a[n],b[n],c[n],d[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<10)
        {
            c[i]=a[i];
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     d[i] = b[i];
    // }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=10)
        {
            j=b[i];
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=10&&b[i]>=j)
        {
            j=b[i];
            k=i+1;
        }
    }
    cout<<k<<endl;
}
return 0;
}