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
    int arr2[100];
    int gu = 0;
    for (int i = 0; i < n; i++)
    {
        int f = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i] && (f == 0) && (i != j))
            {
                arr2[gu] = arr[i];
                f++;
                gu++;
            }
        }
    }
    cout << "duplicates in array are ";
    for (int m = 0; m < gu; m++)
    {
        cout << arr2[m] << " ";
    }
}