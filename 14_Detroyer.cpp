#include <iostream>
#include <cmath>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]-a[i+1]==0||a[i]-a[i+1]==1||a[i+1]-a[i]==0||a[i+1]-a[i]==1||a[i]==0||a[i]-a[i-1]==0||a[i]-a[i-1]==1||a[i-1]-a[i]==0||a[i-1]-a[i]==1)
            {
                k++;
            }
        }
        if(k==n)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
// sort(a,a + n);
//         int mx = *max_element(a,a + n);
//         if(n==1)
//         {
//             if(a[0]==0)
//             {
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//         }
//         else
//         {
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == 0)
//             {
//                 k++;
//             }
//             else if (a[i] == a[i - 1] + 1 || a[i] == a[i - 1])
//             {
//                 k++;
//             }
//         }
//         //cout << mx << endl;
//         for (int i = n-1; i >= 0; i--)
//         {
//             if (a[i] == mx)
//             {
//                 l++;
//                // cout<<l<<endl;
//             }
//             else if (a[i] == a[i + 1] - 1 || a[i] == a[i + 1])
//             {
//                 l++;
//                 //cout<<l<<endl;
//             }
//         }
//         if (k == n || l == n)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//         }