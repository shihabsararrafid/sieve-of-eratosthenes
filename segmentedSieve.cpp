#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
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
void getTotalPrime(ll l, ll r)
{
    ll nsqrt = sqrt(l);
    vector<ll> Primes;
    vector<char> is_Prime(nsqrt + 2, true);
    for (int i = 2; i <= nsqrt; i++)
    {
        if (is_Prime[i])
        {
            Primes.push_back(i);
            for (ll j = i * i; j <= nsqrt; j += i)
            {
                is_Prime[j] = false;
            }
        }
    }
    vector<char> FinalPrime(l - r + 1, true);
    for (int p : Primes)
    {
        // cout << "prev primes" << p << endl;

        ll startPoint = (((r - 1) / p) + 1) * p;
        ll startIndex;
        if (p * p < r)
        {
            startIndex = startPoint;
        }
        else
            startIndex = p * p;
        // cout << "start Index" << startIndex << endl;
        for (ll j = startIndex; j <= l; j += p)
        {
            FinalPrime[j - r] = false;
        }
    }
    // FinalPrime[0] = false;
    // FinalPrime[1] = false;
    for (ll i = 0; i <= (l - r); i++)
    {
        if (FinalPrime[i])
        {
            cout << i + r << endl;
        }
    }
}
int main()
{
    LetsGoCin();
    ll l, r;
    cin >> l >> r;
    getTotalPrime(l, r);
    baperBariJa();
}