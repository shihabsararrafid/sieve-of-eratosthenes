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
vector<int> Primes;
vector<bool> is_Primes(3002, true);
int sieve(int n)
{
    // int n = 3000;
    Primes.push_back(2);
    for (int i = 4; i <= n; i += 2)
        is_Primes[i] = false;
    for (int i = 3; i * i <= n; i++)
    {
        if (is_Primes[i])
        {
            Primes.push_back(i);
            for (int j = i * i; j <= n; j += i)
                is_Primes[j] = false;
        }
    }
    for (int i = sqrt(n); i <= n; i++)
    {
        if (is_Primes[i])
            Primes.push_back(i);
    }
    return Primes.size();
}
int binary_Search(int num, int len)
{
    int low = 0, high = len - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (Primes[mid] == num)
        {
            return true;
        }
        else if (num > Primes[mid])
        {
            low = mid + 1;
        }
        else if (num < Primes[mid])
            high = mid - 1;
    }
    return false;
}
int main()
{
    LetsGoCin();
    int n;
    cin >> n;
    int len = sieve(n);
    int cnt = 0;
    for (int i = 4; i <= n; i++)
    {
        int divPrimes = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                int div1 = j;
                int div2 = i / j;
                if (div1 == div2 && binary_Search(div1, len))
                {
                    divPrimes++;
                }
                else
                {
                    if (binary_Search(div1, len))
                        divPrimes++;
                    if (binary_Search(div2, len))
                        divPrimes++;
                }
            }
        }
        if (divPrimes == 2)
            cnt++;
    }
    cout << cnt << endl;
    baperBariJa();
}