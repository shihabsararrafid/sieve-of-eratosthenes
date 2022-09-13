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
    ll n, x;
    cin >> n >> x;
    li arr[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, n);
    ll sum = 0;
    ll res = 0;

    for (int i = 0, j = n - 1; i <= j;)
    {
        if (arr[i] + arr[j] > x)
        {
            j--;
        }
        else
        {
            i++;
            j--;
        }
        res++;
        // cout << "after"
        //    << " " << i << " " << arr[i] << endl;
        // sum += arr[i];
       // cout << arr[i] << " ";
        ;
        // if (arr[i] + arr[i + 1] > x)
        // {
        //     res++;
        //     // sum = 0;
        //     //  i++;
        // }
        // else
        // {
        //     //  cout << "enter";
        //     res++;
        //     //  cout << i << endl;
        //     ++i;
        //     //  cout << i << endl;
        // }
    }
    cout << res << endl;
    baperBariJa();
}