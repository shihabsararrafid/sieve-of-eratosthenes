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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll res = 0;
        res += n;
        ll div1 = n / 2;
        ll div2 = n / 3;
        res += (div1 * 2);
        res += (div2 * 2);
        cout << res << endl;
    }
    baperBariJa();
}