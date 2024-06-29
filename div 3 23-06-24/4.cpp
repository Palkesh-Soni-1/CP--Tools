/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/

#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define F first
#define S second
#define pb push_back
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define endl "\n"
#define sz(x) ((int)x.size())
#define all(p) p.begin(), p.end()
#define double long double
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define print(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl
#define print1(a)    \
    for (auto x : a) \
    cout << x.F << " " << x.S << endl
#define print2(a, x, y)         \
    for (int i = x; i < y; i++) \
        cout << a[i] << " ";    \
    cout << endl

inline int power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1)
            x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

const int N = 200005;

void solve()
{
    int len;
    cin >> len;
    string se;
    cin >> se;

    int modu = (1e18);
    int check = 0;
    for (int i = 0; i < len; i++)
    {
        if (se[i] == '0')
        {
            check = 1;
        }
    }

    if (len == 2)
    {
        if (se[0] == '0')
        {
            cout << se[1] << endl;
            return;
        }
        cout << se << endl;
        return;
    }
    else
    {
        if (check)
        {
            if (len <= 4)
            {
                if (se[1] == '0')
                {
                    int f = se[2] - '0';
                    int e = se[0] - '0';
                    int modu = min(e + f, e * f);
                    cout << modu << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else
            {
                cout << 0 << endl;
            }
            return;
        }
        else
        {

            for (int i = 0; i < len - 1; i++)
            {
                vector<int> ve;
                for (int j = 0; j < len; j++)
                {
                    if (j != i)
                    {
                        string d = "";
                        d = d + se[j];
                        ve.push_back(stoi(d));
                    }
                    else
                    {
                        string c = "";
                        c = c + se[j] + se[j + 1];
                        j++;
                        ve.push_back(stoi(c));
                    }
                }
                int k = ve[0];
                if (k == 1)
                {
                    k = 0;
                }
                for (int i = 1; i < ve.size(); i++)
                {
                    if (ve[i] == 1)
                    {
                        continue;
                    }
                    k = k + ve[i];
                }
                modu = min(modu, k);
            }
        }
        cout << modu << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();

    int t = 1;
    cin >> t;
    while (t--)
    {
        //     int len;
        // cin>>len;
        // string se;
        // cin>>se;

        // int modu =(1e18);
        // int check = 0;
        // for(int i=0;i<len;i++)
        // {
        //     if(se[i]=='0')
        //     {
        //         check=1;
        //     }
        // }

        // if(len==2)
        // {
        //     if(se[0]=='0')
        //     {
        //         cout<<se[1]<<endl;
        //         continue;
        //     }
        //     cout<<se<<endl;
        //     continue;
        // }
        // // else{
        //     if(check)
        //     {
        //         if(len>=4)
        //         {
        //             cout<<0<<endl;
        //         }
        //         else{
        //             if(se[1]=='0')
        //             {
        //                 int ae = se[0]-'0';
        //                 int be = se[2]-'0';
        //                 int modu = min(ae+be,ae*be);
        //                 cout<<modu<<endl;
        //             }
        //             else{
        //                 cout<<0<<endl;
        //             }
        //         }
        //         continue;
        //     }
        //     for(int i=0;i<len-1;i++)
        //     {
        //         vector<int> ve;
        //         for(int j=0;j<len;j++)
        //         {
        //             if(j==i)
        //             {
        //                 string val="";
        //                 val = val+se[j]+se[j+1];
        //                 j++;
        //                 ve.push_back(stoi(val));
        //             }
        //             else {
        //                 string val = "";
        //                 val = val + se[j];
        //                 ve.push_back(stoi(val));
        //             }
        //         }
        //         int k = ve[0];
        //         if(k==1)
        //         {
        //             k=0;
        //         }
        //         for(int i=1;i<ve.size();i++)
        //         {
        //             if(ve[i]==1)
        //             {
        //                 continue;
        //             }
        //             k = k+ve[i];
        //         }
        //         modu = min(modu,k);
        //     }
        //     cout<<modu<<endl;
        // // }
        solve();
    }

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}