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
// int sizeArr(li arr[])
// {
//     cout << arr.size() << endl;
// }
int Merge(li left[], li right[], li arr[], int len1, int len2, int len3)
{
    int i = 0, j = 0, k = 0;
    while (i < len1 && j < len2)
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
    while (i < len1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < len2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

int MergeSort(li arr[], int n)
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
    MergeSort(left, mid);
    MergeSort(right, n - mid);
    Merge(left, right, arr, mid, n - mid, n);
}

int main()
{
    LetsGoCin();
    int n;
    cin >> n;

    li arr[n + 6];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MergeSort(arr, n);
    li count = 0;
    for (int i = 0; i < n; i++)
    {
        while (arr[i] == arr[i + 1] && i < n - 1)
        {
            i++;
        }
        count++;
    }
    cout << count << endl;
    // sizeArr(arr);
    baperBariJa();
}