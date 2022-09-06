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
int count_primes(int n)
{
    const int S = 10000;

    vector<int> primes;
    int nsqrt = sqrt(n);
    vector<char> is_prime(nsqrt + 2, true);
    for (int i = 2; i <= nsqrt; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= nsqrt; j += i)
                is_prime[j] = false;
        }
    }

    int result = 0;
    vector<char> block(n + 1, true);

    for (int p : primes)
    {
        // int start_idx = (start + p - 1) / p;
        //  cout << p << endl;
        // block[p] = true;
        result++;
        int j;
        if ((p * p) < nsqrt)
        {
            j = (((nsqrt - 1) / p) + 1) * p;
        }
        else
        {
            j = p * p;
        }
        // cout << "j"
        //      << " " << j;
        // cout << "strt"
        //      << " " << j << endl;
        for (; j <= n; j += p)
        {
            // cout << "J"
            //      << " " << j << endl;
            block[j] = false;
        }
    }

    block[0] = block[1] = false;
    for (int i = nsqrt + 1; i <= n; i++)
    {
        if (block[i] == true)
        {
            // cout << i << endl;
            result++;
        }
    }

    return result;
}

int main()
{
    LetsGoCin();
    ll n;
    cin >> n;
    cout << "Total number of prime in the range" << endl;
    cout << count_primes(n) << endl;

    baperBariJa();
}