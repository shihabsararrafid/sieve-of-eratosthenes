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
        int n, k, r, c;
        cin >> n >> k >> r >> c;
        char str[505][505];
        // vector<vector<string>> str(n, vector<string>(n, '.'));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                str[i][j] = '.';
            }
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= n; j++)
        //     {
        //         cout << str[i][j];
        //     }
        //     cout << endl;
        // }
        str[r][c] = 'X';
        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= n; j++)
        //     {
        //         cout << str[i][j];
        //     }
        //     cout << endl;
        // }

        for (int i = r, m = c; i >= 1; i--, m++)
        {
            //  cout << i << " " << m << endl;
            if (m > n)
            {
                m = 1;
            }
            for (int j = m; j <= n; j += k)
            {
                str[i][j] = 'X';
                // cout << i << " " << j << endl;
            }
            for (int j = m; j >= 1; j -= k)
            {
                str[i][j] = 'X';
                // cout << i << " " << j << endl;
            }
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= n; j++)
        //     {
        //         cout << str[i][j];
        //     }
        //     cout << endl;
        // }
        for (int i = r, m = c; i <= n; i++, m--)
        {
            // cout << i << " " << m << endl;
            // cout << "assk" << endl;

            // if (i > 6 && m <= 0)
            // {
            //     break;
            // }

            if (m <= 0)
            {
                // cout << "True" << endl;
                m = 0 + k;
            }
            // cout << i << " " << m << endl;
            for (int j = m; j <= n; j += k)
            {
                str[i][j] = 'X';
            }
            for (int j = m; j >= 1; j -= k)
            {
                str[i][j] = 'X';
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << str[i][j];
            }
            cout << endl;
        }
    }
    baperBariJa();
}