#include <iostream>
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
    int m = arr[0];
    arr[0] = arr[n - 1];

    for (int j = 1; j < n; j++)
    {
        arr[n - 1 - j + 1] = arr[n - 1 - j];
    }
    arr[1] = m;

    for (int m = 0; m < n; m++)
    {
        cout << arr[m] << " ";
    }
}