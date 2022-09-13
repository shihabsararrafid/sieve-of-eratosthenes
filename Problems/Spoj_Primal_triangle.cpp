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

li sizei;

// vector<bool> is_Primes(1e6 + 5, true);
// vector<int> result(1e8 + 5, 0);
void getPrime()
{
    vector<bool> is_Primes(1e8 + 1, true);
    ll n = 1e8;
    Primes.push_back(2);
    for (ll i = 4; i <= n; i += 2)
    {
        is_Primes[i] = false;
    }
    for (ll i = 3; i * i <= n; i++)
    {
        if (is_Primes[i])
        {
            Primes.push_back(i);
            // if (!checkDivisibility(i))
            //   Primes.push_back(i);
            for (ll j = i * i; j <= n; j += i)
            {
                is_Primes[j] = false;
            }
        }
    }
    for (ll i = sqrt(n); i <= n; i++)
    {
        if (is_Primes[i])
        {
            Primes.push_back(i);
        }
    }
    //     for (int i = 0; i < 100; i++)
    //     {
    //         cout << Primes[i] << endl;
    //     }
};

li binarySearch(li num)
{
    li sizei = Primes.size();
    //  cout << Primes[1] << endl;
    li low = 0, high = sizei - 1;
    ll count = 0;
    while (low <= high)
    {
        // cout << "Hello" << endl;
        li mid = low + (high - low) / 2;
        if (Primes[mid] == num)
        {
            return mid;
        }
        else if (num > Primes[mid])
        {
            low = mid + 1;
        }
        else if (num < Primes[mid])
            high = mid - 1;
    }
    return -1;
}
int main()
{
    // sieve();
    getPrime();
    LetsGoCin();
    li t;

    cin >> t;
    while (t--)
    {
        li number;
        cin >> number;
        li index = binarySearch(number);
        if (index != -1)
        {
            //  cout << index << endl;
            double under = sqrt(1 + (4 * 2 * (index)));
            // under /= 2;
            under += 1;
            under /= 2;
            int row = under;
            int col = index - ((row - 1) * (row) / 2);

            cout << row << " " << col + 1 << endl;
        }
        else
            cout << -1 << endl;
    }
    baperBariJa();
}