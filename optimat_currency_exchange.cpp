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
    ll n, d, e;
    cin >> n >> d >> e;
    e *= 5;
    ll ans = 1e9;
    for (int i = 0; i * e <= n; i++)
    {
        ans = min(ans, (n - i * e) % d);
    }
    cout << ans << endl;
    baperBariJa();
}