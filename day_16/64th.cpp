#include <bits/stdc++.h>
using namespace std;
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

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i] && (i != j))
            {
                arr[j] = -1;
            }
        }
    }
    cout << " Array without duplicate is ~ \n";
    for (int m = 0; m < n; m++)
    {
        if (arr[m] != -1)
        {
            cout << arr[m] << " ";
        }
    }
}