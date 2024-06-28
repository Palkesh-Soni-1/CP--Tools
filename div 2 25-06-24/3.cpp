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
    int len, check1, check2;
    cin >> len >> check1 >> check2;
    vector<int> nu(len), vis(len, 0);
    vector<int> p1, p2, p3;
    int pri = 0;
    for (int i = 0; i < len; i++)
    {
        cin >> nu[i];
        if (nu[i] >= check1 && nu[i] <= check2)
        {
            p1.push_back(i);
            pri++;
            vis[i] = 1;
        }
        else if (nu[i] < check1)
        {
            p2.push_back(i);
        }
        else
        {
            p3.push_back(i);
        }
    }
    int lar = 0;
    int len1 = p2.size();
    lar++;
    // poi++;
    len1++;
    // int sum=0;
    int poi = 0;
    int sum = 0;
    int check = 0;
    int perr = 0;
    for (int i = check; i < len; i++)
    {
        lar++;
        // poi++;
        len1++;
        if (nu[i] > check2)
        {
            sum = 0;
            lar++;
            // poi++;
            len1++;
            poi = i + 1;
            continue;
        }
        sum = sum + nu[i];
        while (sum < check1 && i < len - 1)
        {
            i++;
            lar++;
            // poi++;
            len1++;
            sum = sum + nu[i];
        }
        if (sum >= check1 && sum <= check2)
        {
            perr++;
            lar++;
            // poi++;
            len1++;
            sum = 0;
            lar++;
            // poi++;
            len1++;
            poi = i + 1;
        }
        else if (sum > check2)
        {
            sum = 0;
            lar++;
            // poi++;
            len1++;
            i = poi;
            lar++;
            // poi++;
            len1++;
            poi = poi + 1;
        }
        lar++;
        // poi++;
        len1++;
    }
    cout << perr << endl;
    // for(int i=0;i<len1-1;i++)
    // {
    //     int x = p2[i];
    //     int y = p2[i+1];
    //     if(x==y-1)
    //     {
    //         sum = nu[x];

    //         if(sum+nu[y]>=check1&&nu[x]+nu[y]<=check2)
    //         {

    //             pri++;
    //         }
    //         // else if(nu[x]+nu[y]<=check1)
    //         // {
    //         //     sum = nu[x]+nu[y];
    //         // }
    //         // else if(sum+nu[x]>=check1&&nu[x]+sum<=check2)
    //         // {
    //         //     pri++;
    //         // }
    //     }
    //     else{
    //         sum=0;
    //     }
    // }
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