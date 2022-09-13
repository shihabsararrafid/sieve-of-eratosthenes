#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
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
vector<bool> isPrime(300000 + 2, true);
void sieve(li n)
{
    // vector<bool> isPrime(n + 2, true);

    isPrime[2] = true;
    for (li i = 4; i <= n + 1; i += 2)
    {
        isPrime[i] = false;
    }
    for (li i = 3; i * i <= n + 1; i++)
    {
        if (isPrime[i])
        {
            for (li j = i * i; j <= n + 1; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
int checkDivisibility(int num)
{
    int cnt = 0;
    for (int i = 2; i * i <= num; i++)
    {
        int div1 = num / i;
        if (isPrime[i] || isPrime[div1] && num % i == 0)
        {
            cnt++;
            break;
        }

        // else if (isPrime[i] && num % i == 0 && div1 != (i))
        //     cnt++;
        // else if (isPrime[i] && isPrime[div1] && num % i == 0 && div1 != (i))
        // {
        //     cnt++;
        // }
    }
    return cnt;
}
int main()
{
    LetsGoCin();

    li n;
    cin >> n;
    sieve(n);
    vector<int> color(n + 2, 0);
    set<int> st;

    // cout << checkDivisibility(8) << endl;
    int k = 0;
    for (li i = 2; i <= n + 1; i++)
    {
       // cout << i << endl;
        if (isPrime[i])
        {
            color[i] = 1;
        }
        else
        {
            int cnt = checkDivisibility(i);
            // cout << cnt << endl;
            if (cnt == 0)
            {
                color[i] = 1;
            }
            else
            {
                color[i] = 2;
                st.insert(cnt);
            }
        }
    }
    // sort(color.begin() + 2, color.end());
    cout << st.size() + 1 << endl;
    for (int i = 2; i <= color.size() - 1; i++)
    {
        cout << color[i] << " ";
    }
    // cout << st.size() << endl;
    cout << endl;
    baperBariJa();
}