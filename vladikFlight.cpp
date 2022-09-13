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
    int n, a, b;
    cin >> n >> a >> b;
    string str;
    cin >> str;
    int d1 = min(a, b);
    int d2 = max(a, b);
    int res = 0;
    if (d1 == d2 || (str[d1 - 1] == str[d2 - 1]))
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        cout << 1 << endl;
        return 0;
    }
    // else
    // {
    //     int res2 = 0;
    //     int res3 = 0;
    //     int i = d1 - 1;
    //     int j = d2 - 1;
    //     while (str[i] != str[j] && i < j)
    //     {
    //         if (str[d1 - 1] == str[i + 1])
    //         {
    //             res += 0;
    //         }
    //         else
    //             res++;
    //         i++;
    //     }
    //     i = d1 - 1;
    //     j = d2 - 1;
    //     if (d2 == n)
    //     {
    //         res2 = 1e6;
    //     }
    //     while (str[i] != str[j] && j < n - 1)
    //     {
    //         if (str[d2 - 1] == str[j + 1])
    //         {
    //             res2 += 0;
    //         }
    //         else
    //             res2++;
    //         j++;
    //     }
    //     i = d1 - 1;
    //     j = d2 - 1;

    //     while (str[i] != str[j] && j > i)
    //     {
    //         if (str[d2 - 1] == str[j - 1])
    //         {
    //             res3 += 0;
    //         }
    //         else
    //             res3++;
    //         res3++;
    //         j--;
    //     }
    //     cout << res << " " << res2 << " " << res3 << endl;
    //     int res1 = min(res, min(res2, res3));
    //     cout << res1 << endl;
    //     return 0;

    baperBariJa();
}