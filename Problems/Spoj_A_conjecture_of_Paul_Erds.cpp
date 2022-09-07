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
bool checkPrimes(ll num)
{
    if (num == 1)
    {
        return false;
    }
    if (num < 2)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        for (ll i = 3; i * i <= num; i += 2)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    // vector<int> v;

    // for (int i = 1; i * i < 10000000; ++i)
    //     for (int j = 1; j * j * j * j < 10000000; ++j)
    //         if (checkPrimes(i * i + j * j * j * j))
    //             v.push_back(i * i + j * j * j * j);
    vector<int> num;
    int nu = 10000000;
    for (int i = 1; i * i <= nu; i++)
    {
        for (int j = 1; j * j * j * j <= nu; j++)
        {
            if (checkPrimes(i * i + j * j * j * j))
            {
                num.push_back(i * i + j * j * j * j);
            }
        }
    }
    sort(num.begin(), num.end());
    unique(num.begin(), num.end());
    LetsGoCin();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        // if (checkPrimes(n))
        // {
        //     cout << "Suuceess" << endl;
        // }
        int res = 0;
        for (int i = 0; i <= num.size() && num[i] <= n; i++)
        {
            res++;
        }
        cout << res << endl;

        // cout << checkPrimes(102) << endl;
    }
    baperBariJa();
}