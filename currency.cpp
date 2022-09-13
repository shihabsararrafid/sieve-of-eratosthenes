#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
#define LetsGoCin()                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define li long
#define ll long long
#define ull unsigned long long
#define baperBariJa() return 0
#define prntl(a) cout << a << endl
#define nl cout << endl
#define lp1(i, n) for (int i = 1; i <= n; i++)
#define lp2(i, n) for (int i = 0; i < n; i++)
#define prnt(a) cout << a
int main()
{

    LetsGoCin();
    vector<bool> dollarNote(103, false);
    vector<bool> euroNote(203, false);
    int dollar[] = {1, 2, 5, 10, 20, 50, 100};
    int euro[] = {5, 10, 20, 50, 100, 200};

    for (int i = 0; i < 7; i++)
    {
        dollarNote[dollar[i]] = true;
    }
    for (int i = 0; i < 6; i++)
    {
        euroNote[euro[i]] = true;
    }
    li n, d, e;
    bool big;
    cin >> n >> d >> e;
    int minimum = min(n, min(d, e));

    if (d >= e)
    {
        big = false;
    }
    else
        big = true;
    if (minimum == n)
    {
        cout << n << endl;
        return 0;
    }
    if ((n % d == 0 && dollarNote[n / d]) || ((n % e == 0) && euroNote[n / e]))
        cout << 0 << endl;
    else
    {
        if (big)
        {
            if (euroNote[n / e])
            {
                int rem = n % e;
                if (dollarNote[rem / d])
                {
                    cout << rem % d << endl;
                    return 0;
                }
                else
                {
                    int p = upper_bound(dollar, dollar + 7, rem / d) - dollar;
                    p--;
                    rem = (rem - ((dollar[p]) * d));
                    cout << rem << endl;
                }
            }
            else if (dollarNote[n / d])
            {
                cout << n % d << endl;
            }
            else{
                
            }
        }
        else
        {
            if (dollarNote[n / d])
            {
                int rem = n % d;
                if (euroNote[rem / e])
                {
                    cout << rem % e << endl;
                    return 0;
                }
                else
                {
                    int p = upper_bound(euro, euro + 6, rem / d) - euro;
                    p--;
                    rem = (rem - ((euro[p]) * d));
                    cout << rem << endl;
                }
            }
            else if (dollarNote[n / d])
            {
                cout << n % d << endl;
            }
        }
    }

    baperBariJa();
}