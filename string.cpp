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
    string str;
    cin >> str;
    int res = 0;
    int len = str.size();
    int index1 = -1, index2 = -1, index3 = -1;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a')
        {
            index1 = i;
        }
        else
            break;
    }
    if (index1 != -1)
    {
        for (int i = index1 + 1; i < len; i++)
        {
            // cout << i << endl;

            if (str[i] == 'b')
            {
                index2 = i;
            }
            else
                break;
        }
        if (index2 != -1)
        {
            for (int i = index2 + 1; i < len; i++)
            {

                if (str[i] == 'c')
                {
                    index3 = i;
                }
                else
                    break;
            }
            if (index3 != -1)
            {
                bool ok = true;
               // cout << " hello" << index3 << " " << endl;
                for (int i = index3 + 1; i < len; i++)
                {
                    if (str[i] == 'c')
                    {
                        continue;
                    }
                    else
                    {
                        ok = false;

                        break;
                    }
                }
                if (ok && ((index3 - index2) == (index2 - index1) || (index3 - index2) == (index1 - 0 + 1)))
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    // cout << index1 << " " << index2 << " " << index3 << endl;

    baperBariJa();
}