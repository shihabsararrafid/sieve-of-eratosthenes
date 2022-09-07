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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        ll sum = 0;
        sum += n;
        for (ll i = 0; i < (2 * n - 1); i++)
        {
            if (str[i] == ')' && str[i + 1] == '(')
                sum--;
        }
        cout << sum << endl;
    }
    baperBariJa();
}