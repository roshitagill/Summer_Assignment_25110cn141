#include <iostream>
using namespace std;
int SearchArray(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(num) / sizeof(num[0]);
    int index;
    int n;
    cout << "Enter element to Search:" << '\n';
    cin >> n;
    index = SearchArray(num, size, n);
    if (index != -1)
    {
        cout << n << " is at index " << index;
    }
    else
    {
        cout << n << " is not in the array";
    }
}