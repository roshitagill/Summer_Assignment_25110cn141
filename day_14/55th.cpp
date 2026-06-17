#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements :";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "Second Largest element is ~ " << arr[n - 2];

    return 0;
}