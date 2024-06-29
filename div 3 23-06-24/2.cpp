/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/

#include <bits/stdc++.h>

using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1) x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

void solve() {
    int p,q;
    cin>>p>>q;
    // cout<<"p "<<p<<" q "<<q<<endl;
    vector<vector<int>>matx(p,vector<int>(q));
    // int matx[p][q];
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>matx[i][j];
            // cout<<matx[i][j]<<" ";
        }
        // cout<<endl;
    }
    // cout<<endl;
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            int check=0;
            int counte=0;
            int countt=0;
            if(j+1<q)
            {
              if(matx[i][j+1]<matx[i][j]&&j+1<q)
              {
                check = max(check,matx[i][j+1]);
                counte++;
              }
                countt++;
            }
            if(j-1>=0)
            {
              if(matx[i][j-1]<matx[i][j]&&j-1<q)
              {
                check = max(check,matx[i][j-1]);
                counte++;
              }
                countt++;
            }
            if(i+1<p)
            {
              if(matx[i+1][j]<matx[i][j]&&i+1<p)
              {
                check = max(check,matx[i+1][j]);
                counte++;
              }
                countt++;
            }
            if(i-1>=0)
            {
              if(matx[i-1][j]<matx[i][j]&&i-1<p)
              {
                check = max(check,matx[i-1][j]);
                counte++;
              }
                countt++;
            }
            if(counte==countt)
            {
                matx[i][j] = check;
            }
            // if(matx[i][j-1]<matx[i][j]&&j-1>0)
            // check = max(check,matx[i][j-1]);
            // if(matx[i-1][j]<matx[i][j]&&i-1>0)
            // check = max(check,matx[i-1][j]);
            // if(matx[i+1][j]<matx[i][j]&&i+1<p)
            // check = max(check,matx[i+1][j]);
            // if(i==0&&j==0)
            // {
            //     if(matx[i][j]>matx[i+1][j]&&matx[i][j]>matx[i][j+1]&&i+1<p&&j+1<q)
            //     matx[i][j] = max(matx[i+1][j],matx[i][j+1]);
            // }
            // else if(i==0)
            // {
            //     if(matx[i][j]>matx[i+1][j]&&matx[i][j]>matx[i][j+1]&&i+1<p&&j+1<q)
            //     matx[i][j] = max(matx[i+1][j],matx[i][j+1]);
            // }
        }
    }
    //  vector<vector<int>>matx(p,vector<int>(q));
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        cout<<matx[i][j]<<" ";
        cout<<endl;
    }
    // cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
    #endif

    clock_t z = clock();

    int t = 1;
    cin >> t;
    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}