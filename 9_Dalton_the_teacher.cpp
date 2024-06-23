#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int N;
    cin>>N;
    int a[N];
    int l=0;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<N;i++)
    {
        if(a[i]==i+1)
        {
            l++;
        }
    }
    // if(k==0)
    // {
    //     cout<<"0"<<endl;
    // }
    // else if(k==1)
    // {
    //     cout<<"1"<<endl;
    // }
    // else{
    //     cout<<k-1<<endl;
    // }
    if(l%2!=0)
    {
        l++;
    }
    cout<<l/2<<endl;
}
return 0;
}