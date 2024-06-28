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
    // cout<<"h"<<endl;
    int P1, P2, P3;
    cin >> P1 >> P2 >> P3;
    // while (P3--)
    // {
    //     P1++;
    //     if (P1 % P2 == 0)
    //     {
    //         int Divid= P1;
    //         int Divis = P2;
    //         double result = log(Divid) / log(Divis);
    //         // int timesDivi = int(result);
    //         int timesDivi = static_cast<int>(result);
    //         P1 = timesDivi;
    //     }
    // }
    int kam1 = P1;
    int kam2 = P2;
    int kam3 = P3;
    int Per = kam1%kam2;
    int Per2 = kam2-Per;
    if(kam3==Per2) 
    {
        kam1=kam1+kam3;
        while(kam1%kam2==0)
        kam1= kam1/kam2;
        cout<<kam1<<endl;
    }
    else if( kam3<Per2)
    {
        cout<<kam1+kam3<<endl;
    }
    else{
        int fla=1;
        while(fla)
        {
            int Per3 = Per2;
            if(kam1==1)
            {
                fla=0;
                // break;
            }
            else if(kam3>=Per3)
            {
                kam1  = kam1+Per3;
                kam3 = kam3-Per3;
                while(kam1%kam2==0)
                {
                    kam1 = kam1/kam2;
                }
                Per2 = kam2-kam1%kam2;
            }
            else{
                kam1=kam1+kam3;
                kam3=0;
                fla=0;
            }
        }
        if(kam3!=0)
        {
            cout<<kam3%(kam2-1)+1<<endl;
        }
        else{
            cout<<kam1<<endl;
        }
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
        solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}