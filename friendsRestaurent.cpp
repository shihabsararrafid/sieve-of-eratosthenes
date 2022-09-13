#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
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
        vector<ll> avail(n + 1);
        vector<ll> max(n + 1);
        multimap<ll, ll> mp;
        vector<ll> savil;
        vector<ll> smax;
        vector<ll> ghatti;
        for (int i = 0; i < n; i++)
            cin >> avail[i];
        for (int i = 0; i < n; i++)
            cin >> max[i];
        for (int i = 0; i < n; i++)
        {
            ghatti.push_back(max[i] - avail[i]);
            // mp.insert({avail[i], max[i]});
        }
        sort(ghatti.begin(), ghatti.end());
        // for (int i = 0; i < n; i++)
        // {
        //     cout << ghatti[i] << " ";
        //     // mp.insert({avail[i], max[i]});
        // }
        ll i = 0;
        ll j = n - 1;
        ll res = 0;
        while (i < j)
        {
            if (ghatti[i] + ghatti[j] >= 0)
            {
                res++;
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }
        cout << res << endl;
        // for (const auto &kv : mp)
        // {
        //     savil.push_back(kv.first);
        //     smax.push_back(kv.second);
        //     cout << kv.first << " " << kv.second << endl;
        // }
        // ll len = savil.size();
        // ll sum1 = 0;
        // ll sum2 = 0;
        // for (ll i = 0, ; i <= len;)
        // {
        //     sum1 += (savil[i] + savil[j]);
        //     sum2 += (smax[i] + smax[j]);
        // }
    }
    baperBariJa();
}