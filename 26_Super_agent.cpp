#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ char a[3][3];
int k=0;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cin>>a[i][j];
    }
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(a[i][j]==a[2-i][2-j])
        {
            k++;
        }
    }
}
if(k==9)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}