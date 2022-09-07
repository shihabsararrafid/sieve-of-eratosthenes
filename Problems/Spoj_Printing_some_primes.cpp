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
vector<ll> Primes;
void sieve()
{
    ll num = 1e8;
    // ll nsqrt = sqrt(num);
    vector<bool> is_Primes(num + 2, true);
    // Using simple  sieve to find
    Primes.push_back(2);
    for (ll i = 4; i <= num; i += 2)
    {
        is_Primes[i] = false;
    }
    for (ll i = 3; i * i <= num; i++)
    {
        if (is_Primes[i])
        {
            Primes.push_back(i);
            for (ll j = i * i; j <= num; j += i)
            {
                is_Primes[j] = false;
            }
        }
    }
    for (ll i = sqrt(num); i <= num; i++)
    {
        if (is_Primes[i])
        {
            Primes.push_back(i);
        }
    }
    // vector<char> New_Primes(num - nsqrt + 1, true);
    // for (ll p : Primes)
    // {
    //     ll startIndex;
    //     if (p * p < nsqrt)
    //     {
    //         startIndex = (((nsqrt - 1) / p) + 1) * p;
    //     }
    //     else
    //     {
    //         startIndex = p * p;
    //     }
    //     for (ll i = startIndex; i <= num; i += p)
    //     {
    //         New_Primes[i - nsqrt] = false;
    //     }
    // }
    // for (ll i = 0; i <= num - nsqrt; i++)
    // {
    //     if (New_Primes[i])
    //     {
    //         Primes.push_back(i);
    //         // cout << i + nsqrt << endl;
    //     }
    // }
    for (int i = 0; i < Primes.size(); i += 100)
    {
        cout << Primes[i] << endl;
    }
}
int main()
{
    LetsGoCin();
    sieve();
    baperBariJa();
}