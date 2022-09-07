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
        ll n, m;
        cin >> n >> m;
        if (m < n)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                ll d = (m - n + 2);
                if (d % 2 == 0)
                {
                    cout << "YES" << endl;
                    for (int i = 1; i <= n - 2; i++)
                    {
                        cout << 1 << " ";
                    }
                    cout << d / 2 << " " << d / 2 << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "YES" << endl;
                for (int i = 1; i <= n - 1; i++)
                {
                    cout << 1 << " ";
                }
                cout << m - n + 1 << endl;
            }
        }
    }
    baperBariJa();
}