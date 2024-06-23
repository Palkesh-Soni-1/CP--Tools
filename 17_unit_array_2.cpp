#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int product = 1;
        int plus = 0, minus = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            product *= a[i];
            if (a[i] > 0)
            {
                plus++;
            }
            else
                minus++;
        }
        if (n % 2 == 0)
        {
            if ((n / 2) % 2 == 0)
            {
                if (minus % 2 == 0 && plus % 2 == 0)
                {
                    cout << (minus - plus) / 2 << endl;
                }
                else
                    cout << (minus - plus) / 2 << endl;
            }
            else
            {
                cout << (minus - plus) / 2 + 1 << endl;
            }
        }
        else
        {
            if (minus % 2 != 0)
            {
                if ((minus - plus) > 0)
                {
                    cout << (minus - plus) << endl;
                }
                else
                cout << 1 << endl;
            }
            else
            {
                if ((minus - plus) == 1)
                {
                    cout << 2 << endl;
                }
                else if ((minus - plus) > 1)
                {
                    cout << (minus - plus) - 1 << endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
        }
    }

    return 0;
}