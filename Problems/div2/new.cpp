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
int main()
{
    LetsGoCin();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr(n + 3);
        vector<int> arr1;
        // if (n == 1)
        // {
        //     res = arr[0];
        //     cout<<arr[]
        // }
        //  vector<int> res;
        ll min1 = 100000, indexs = -3;
        ll max1 = 0, indexb = -2;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (arr[i] < min1)
            {
                min1 = arr[i];
                indexs = i;
            }

            if (arr[i] > max1)
            {
                max1 = arr[i];
                indexb = i;
            }
        }

        for (int i = 1; i < n; i++)
        {
            int diff = arr[i] - arr[i + 1];
            //  cout << diff << endl;
            arr1.push_back(diff);
        }
        arr1.push_back(arr[n] - arr[1]);
        ll maxi = -100000000000;
        for (int i = 0; i < arr1.size(); i++)
        {
            //  cout << arr1[i] << " ";

            if (arr1[i] > maxi)
            {
                maxi = arr1[i];
            }
        }
        // cout << endl;
        //  ll maxi = *max_element(arr1.begin(), arr1.end());
        //  sort(arr1.begin(), arr1.end());
        // cout << maxi << endl;
        //  for (int i = 1; i < n; i++)
        //  {
        //      int diff = arr[i + 1] - arr[i];
        //      res1.push_back(diff);
        //  }
        //   sort(arr1.begin(), arr1.end());
        //  cout << arr1[0] << endl;
        //  arr[n + 1] = -100;
        //  cout << max << " " << indexb << " " << min << " " << indexs << endl;
        ll res = 0;
        res = max(res, maxi);
        int max2 = arr[2];
        for (int i = 2; i <= n; i++)
        {
            if (arr[i] > max2)
            {
                max2 = arr[i];
            }
        }
        int min3 = arr[1];
        for (int i = 1; i <= n - 1; i++)
        {
            if (arr[i] < min3)
            {
                min3 = arr[i];
            }
        }
        res = max(res, (max2 - arr[1]));
        res = max(res, (arr[n] - min3));
        // res = max(res, max1 - min1);
        // res = max(res, arr[n] - min1);
        // res = max(res, arr[n] - arr[1]);
        // res = max(res, max1 - arr[1]);

        // ll res = maxi;
        // if (arr[1] == min || arr[n] == max)
        //     res = (max - min);
        // if (arr[1] != max)
        // {
        //     if ((max - arr[1]) > res)
        //         res = max - arr[1];
        // }
        // cout << maxi << endl;
        //  if (arr[1] == min || arr[n] == max)
        //  {
        //      res = max - min;
        //  }
        //  else if (arr[1] == max)
        //  {
        //      if ((max - arr[2]) > maxi)
        //          res = max - arr[2];
        //      else
        //      {
        //          res = maxi;
        //      }
        //  }
        //  else
        //  {
        //      if ((max - arr[1]) > maxi)
        //          res = max - arr[1];
        //      else
        //      {
        //          res = maxi;
        //      }
        //  }

        cout
            << res << endl;
    }
    baperBariJa();
}