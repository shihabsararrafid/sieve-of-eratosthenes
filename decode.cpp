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
        int n;
        cin >> n;
        string str;
        vector<char> res;
        cin >> str;
        for (int i = n - 1; i >= 0; i--)
        {
            if (str[i] == '0')
            {
                int num = (str[i - 1] - '0') + ((str[i - 2] - '0') * 10);
                // cout << num << endl;
                char c = (num - 1) + 'a';
                // cout << c << endl;
                res.push_back(c);
                i -= 2;
            }
            else
            {
                // cout << (str[i] - '0') << endl;
                char c = ((str[i] - '0') - 1) + 'a';
                //   cout << c << endl;
                res.push_back(c);
            }
        }
        // cout << res.size() << endl;
        for (int i = res.size() - 1; i >= 0; i--)
        {
            cout << res[i];
        }
        cout << endl;
    }
    baperBariJa();
}