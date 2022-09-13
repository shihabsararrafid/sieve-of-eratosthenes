#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
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
        vector<int> element;
        vector<int> index;
        string str;
        cin >> str;
        for (int i = 1; i < str.size() - 1; i++)
        {
            int num = str[i] - 'a';
            //  cout << num << endl;
            element.push_back(num + 1);
            index.push_back(i + 1);
        }
        int first = str[0] - 'a' + 1;

        int last = str[str.size() - 1] - 'a' + 1;
        // cout << first << " " << last << endl;
        ll dist = abs(first - last);
        multimap<int, size_t> mp;
        vector<int> value;
        int cnt = 0;
        if (first > last)
        {
            for (int i = 0; i < element.size(); i++)
            {
                if (element[i] <= first && element[i] >= last)
                {
                    mp.insert({element[i], i + 2});
                }
            }
            //  cout << 1 << " ";
            for (auto kv = mp.rbegin(); kv != mp.rend(); kv++)
            {
                value.push_back(kv->second);
                cnt++;
                //     cout << kv->second << " ";
            }
            //  cout << str.size() << endl;
            // for (const auto &kv : mp)
            // {
            //     cout << kv.first << " " << kv.second << endl;
            //     // c: 2 1 4 3 0
            // }
        }
        else
        {
            for (int i = 0; i < element.size(); i++)
            {
                if (element[i] >= first && element[i] <= last)
                {
                    mp.insert({element[i], i + 2});
                }
            }
            // cout << 1 << " ";
            for (const auto &kv : mp)
            {
                value.push_back(kv.second);
                cnt++;
                // cout << kv.second << " ";
                //  c: 2 1 4 3 0
            }
            // cout << str.size() << endl;
        }
        cout << dist << " " << cnt + 2 << endl;
        cout << 1 << " ";
        for (int i = 0; i < value.size(); i++)
        {
            cout << value[i] << " ";
        }
        cout << str.size() << endl;
        // cout << endl;
        //  for (int i = 1; i < index.size(); i++)
        //  {
        //      cout << index[i] << " ";
        //  }
        //  int big = 0, index1;
        //  for (int i = 1; i < element.size() - 1; i++)
        //  {
        //      if (element[i] > big)
        //      {
        //          big = element[i];
        //          index1 = i + 1;
        //      }
        //  }
        //  cout << endl;
        //  for (int i = 1; i < str.size() - 1; i++)
        //  {
        //      for (int j = i + 1; j < str.size() - 1; j++)
        //      {
        //          if (element[j] < element[i])
        //          {
        //              int temp = index[i];
        //              index[i] = index[j];
        //              index[j] = temp;
        //          }
        //      }
        //  }
        //  index.push_back(str.size());
        //  int sum1 = 0;
        //  int num1 = str[0] - 'a' + 1;

        // cout << num1 << endl;
        // for (int i = 0; i < index.size(); i++)
        // {
        //     cout << index[i] << " ";
        // }
        // cout << endl;
        // sort(element.begin(), element.end(), greater<int>());
        // sum1 += abs(num1 - element[0]);
        // for (int i = 0; i < element.size(); i++)
        // {
        //     cout << element[i] << " ";
        // }
        // cout << endl;
        // int len = element.size();
        // for (int i = 1; i < element.size() - 1; i++)
        // {
        //     sum1 += abs(element[i] - element[i + 1]);
        // }
        // int sum = sum1;
        // int num = str[str.size() - 1] - 'a' + 1;
        // cout << num << endl;

        // sum1 += abs(element[0] - num);
        // sum1 += abs(element[0] - element[len - 1]);
        // cout
        //     << sum1 << " " << sum << " " << index1 << endl;
    }
    baperBariJa();
}