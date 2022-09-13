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
    int n, m;
    cin >> n >> m;
    string str1, str2;
    cin >> str1 >> str2;
    string left = "";
    string right = "";
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (str1[i] == '*')
        {
            found = true;
            break;
        }
    }
    if (!found)
    {
        if (str1 == str2)
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    else
    {
        int i = 0;
        while (str1[i] != '*')
        {
            left += str1[i];
            right += str2[i];
            i++;
        }
        if (left == right)
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
        left = "";
        right = "";
        i = n - 1;
        int j = m - 1;
        while (str1[i] != '*')
        {
            left += str1[i];
            right += str2[j];
            i--;
            j--;
        }
        reverse(left.begin(), left.end());
        reverse(right.begin(), right.end());
        if (left == right)
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    baperBariJa();
}