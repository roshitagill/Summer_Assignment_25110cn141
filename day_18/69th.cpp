#include <iostream>
using namespace std;
void sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter number of Elements:";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of the array:" << '\n';
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, n);
    cout << "Sorting the Array using Bubble Sort \n";
    for (int element : arr)
    {
        cout << element << " ";
    }
    return 0;
}