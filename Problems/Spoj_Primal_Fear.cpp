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
bool checkDivisibility(int n)
{
    while (n > 0)
    {
        if (n % 10 == 0)
        {
            return true;
        }
        n = n / 10;
    }
    return false;
}
vector<bool> is_Primes(1e6 + 5, true);
vector<int> result(1e6 + 5, 0);
void getPrime()
{
    int n = 1e6;

    for (int i = 4; i <= n; i += 2)
    {
        is_Primes[i] = false;
    }
    for (int i = 3; i * i <= n; i++)
    {
        if (is_Primes[i])
        {
            // if (!checkDivisibility(i))
            //   Primes.push_back(i);
            for (int j = i * i; j <= n; j += i)
            {
                is_Primes[j] = false;
            }
        }
    }
    // for (int i = sqrt(n); i <= n; i++)
    // {
    //     if (is_Primes[i] && !checkDivisibility(i))
    //     {
    //         Primes.push_back(i);
    //     }
    // }
    for (int i = 2; i <= 1e6; i++)
    {
        result[i] = result[i - 1];
        if (is_Primes[i] && !checkDivisibility(i))
        {
            result[i]++;
        }
    }
};

// void calculate()
// {
//     for (int i = 2; i <= 1e6; i++)
//     {
//         result[i] = result[i - 1];
//         if (is_Primes[i] && checkDivisibility(i))
//         {
//             result[i]++;
//         }
//     }
// }
int main()
{
    getPrime();
    // calculate();
    LetsGoCin();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // int res = 0;

        cout << result[n] << endl;
    }

    baperBariJa();
}