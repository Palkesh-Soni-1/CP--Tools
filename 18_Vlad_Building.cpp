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
        int n, k = 0, l = 0, x = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0 && a[i] > 0)
            {
                k++;
            }
            // else if (a[i] % 2 == 1 && a[i] > 0)
            // {
            //     l++;
            // }
        }
        if (k == n || l == n)
        {
            cout << "Yes" << endl;
        }
        else
        {
            for (int i = 0; i < n;)
            {
                for (int j = 0; j < n && i < n; j++)
                {
                    // cout<<a[j]<<endl;
                    // cout<<a[i]<<endl;
                    // int c = (a[j]-a[i]);
                    // int d = abs(c);
                    // cout<<d<<endl;
                    // cout<<(a[j] - a[i])<<endl;

                    // if (i < n)
                    // {
                    // cout<<"No j"<<j<<endl;
                    if (a[i] % 2 != 1)
                    {
                        // cout<<"No i"<<i<<endl;
                        if ((a[i] - a[j]) % 2 == 1 && a[i] > 0 && a[j] > 0 && (a[i] - a[j]) > 0)
                        {
                            ++x;
                            ++i;
                            // cout<<"No i"<<i<<endl;
                            // cout<<a[i]<<endl;
                            j = -1;
                            // cout <<" not x"<< x << endl;
                        }
                    }
                    // else if (a[i] % 2 == 1 && a[i] > 0)
                    // {
                    //     ++x;
                    //     ++i;
                    //     j = -1;
                    //     l++;
                    //     // cout <<"Yes x"<< x << endl;
                    //     // cout<<"Yes i"<<i<<endl;
                    // }
                    // }
                }
                ++i;
            }
            if (x == n )
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        // cout << x << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         //cout<<a[j]<<endl;
    //         //cout<<a[i]<<endl;
    //        //int c = (a[j]-a[i]);
    //       // int d = abs(c);
    //       // cout<<d<<endl;
    //         if ((a[j] - a[i]) % 2 == 0 && a[i] > 0)
    //         {
    //             y++;
    //         }
    //     }
    // }
    // }
    // cout<<k<<l<<x<<y<<endl;

    return 0;
}