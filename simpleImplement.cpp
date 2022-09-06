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
#define loop(i, n) for (int i = 1; i <= n; i++)
#define prnt(a) cout << a
void sieve(ll n, vector<bool> &prime)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (prime[i] && (i * i) <= n)
            for (ll j = i * i; j <= n; j = j + i)
            {
                prime[j] = false;
            }
    }
}
int main()
{
    LetsGoCin();
    cout << "Enter The Highest Range to print Prime Numbers" << endl;
    ll n;
    cin >> n;
    vector<bool> prime(n + 3, true);
    sieve(n, prime);
    ll k = 1;
    for (ll i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cout << k << "th prime"
                 << " " << i << endl;
            k++;
        }
    }
    baperBariJa();
}