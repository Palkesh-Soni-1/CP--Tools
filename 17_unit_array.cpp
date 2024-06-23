#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    int l=0,k=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            k++;
        }
        else{
            l++;
        }
    }
    if(k==n)
    {
        cout<<0<<endl;
    }
    else if(l==n)
    {
        if(l==2)
        {
            cout<<2<<endl;
        }
        else if(l%2==0)
        {
            cout<<n/2<<endl;
        }
        else{
            if((l/2)%2!=0)
            {
                cout<<(l/2)+2<<endl;
            }
            else{
                cout<<(l/2)+1<<endl;
            }
        }
    }
    else if(k==l)
    {
        if(k%2==0&&l%2==0)
        {
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    else if(k>l)
    {
       cout<<l%2<<endl;
    }
    else if(l>k)
    {
      int e= l-k;
      if(l==2&&k==1)
      {
        cout<<2<<endl;
      }
      else if(l%2!=0&&k%2==0)
      {
        cout<<e<<endl;
      }
      else if(l%2!=0&&k%2!=0)
      {
        cout<<e-1<<endl;
      }
      else if(l%2==0&&k%2==0)
      {
        cout<<e<<endl;
      }
      else if(l%2==0&&k%2!=0)
      {
        cout<<e-1<<endl;
      }
    }
}
return 0;
}