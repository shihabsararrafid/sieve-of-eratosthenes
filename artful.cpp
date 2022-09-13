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
    int n;
    cin >> n;
    int arr1[n + 2];
    int arr2[n + 2];
    vector<bool> check(4000005, false);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        check[arr1[i]] = true;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
        check[arr2[i]] = true;
    }
    li res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (check[arr1[i] ^ arr2[j]])
                res++;
        }
    }
    if (res % 2 == 0)
        cout << "Karen" << endl;
    else
        cout << "Koyomi" << endl;
    baperBariJa();
}