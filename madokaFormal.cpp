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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr1(n + 5);
        vector<ll> arr2(n + 5);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> arr2[i];
        }
        bool ok = true;
        // checking whether it is impossible to make the array equal
        for (int i = 1; i <= n; i++)
        {
            if (arr1[i] - arr2[i] > 0)
            {
                ok = false;
                break;
            }
        }
        if (ok == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool ok1 = true;
            if ((arr1[n] < arr2[n]) && (arr2[n] - 1 > arr2[1]))
            {
                ok1 = false;
            }

            for (int i = 1; i < n; i++)
            {
                if (arr1[i] < arr2[i] && arr2[i] > arr2[i + 1] + 1)
                {
                    //  cout << "Hdfieshfi" << endl;
                    ok1 = false;
                    break;
                }

                // cout << i << endl;
                // if (arr1[i] <= arr1[i + 1] || arr1[i] == arr2[i])
                // {
                //     if (arr1[i] != arr2[i])
                //     {
                //         if (arr2[i] <= arr2[i + 1] + 1)
                //         {
                //             ok1 = true;
                //             continue;
                //         }
                //         else
                //         {
                //             ok1 = false;
                //             break;
                //         }
                //     }
                //     else
                //     {
                //         ok1 = true;
                //         continue;
                //     }
                // }

                // else
                // {
                //     // cout << arr1[i] << " " << arr1[i + 1] << endl;
                //     if (arr1[i + 1] == arr2[i + 1])
                //     {
                //         ok1 = true;
                //         continue;
                //     }
                //     // continue;
                //     else if (arr1[i] == arr2[i] && i == n - 1)
                //     {
                //         ok1 = true;
                //         continue;
                //     }
                //     // continue;
                //     else if (arr1[i] >= arr2[i + 1])
                //     {
                //         //  cout << "entered";
                //         //  cout << arr1[i] << " " << arr1[i + 1] << endl;
                //         ok1 = false;
                //         break;
                //     }
                // }
                // if (ok1 == false)
                // {
                //     break;
                // }
            }

            if (ok1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    baperBariJa();
}