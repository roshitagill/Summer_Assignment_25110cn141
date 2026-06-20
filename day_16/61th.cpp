#include <bits/stdc++.h>
using namespace std;
int search(int n, int arr[], int s)
{
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == s)
        {
            return j;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter number of elements:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:" << '\n';
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s;
    cout << "Enter the number you want to find:";
    cin >> s;
    int index;
    index = search(n, arr, s);
    if (index != -1)
    {
        cout << s << " is present at index " << index;
    }
    else
    {
        cout << s << " is not present in the array";
    }
    return 0;
}