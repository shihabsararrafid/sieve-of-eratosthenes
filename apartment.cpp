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
void Merge(li left[], li right[], li arr[], int n, int lenl, int lenr)
{
    int i = 0, j = 0, k = 0;
    while (i < lenl && j < lenr)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    while (i < lenl)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
    while (j < lenr)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
}
int mergeSort(li arr[], int n)
{
    if (n < 2)
        return 0;
    int mid = n / 2;
    li left[mid];
    li right[n - mid];
    for (int i = 0; i < mid; i++)
    {
        left[i] = arr[i];
    }
    for (int i = mid; i < n; i++)
    {
        right[i - mid] = arr[i];
    }
    mergeSort(left, mid);
    mergeSort(right, n - mid);
    Merge(left, right, arr, n, mid, n - mid);
}
int main()
{
    LetsGoCin();
    int n, m;
    li k;
    cin >> n >> m >> k;
    li desired[n + 1];
    li size[m + 1];
    for (int i = 0; i < n; i++)
        cin >> desired[i];
    for (int i = 0; i < m; i++)
        cin >> size[i];
    mergeSort(desired, n);
    mergeSort(size, m);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << desired[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < m; i++)
    // {
    //     cout << size[i] << " ";
    // }
    int a = 0, b = 0;
    li ans = 0;
    while (a < n && b < m)
    {
        if (abs(desired[a] - size[b]) <= k)
        {
            ans++;
            a++;
            b++;
        }
        else if (desired[a] < size[b])
        {
            a++;
        }
        else if (desired[a] > size[b])
        {
            b++;
        }
    }
    cout << ans << endl;
    baperBariJa();
}