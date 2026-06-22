#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int n, int e)
{
    int min = 0;
    int max = n - 1;
    while (min <= max)
    {
        int mid = max + (max - min) / 2;
        if (arr[mid == e])
        {
            return mid;
        }
        else if (arr[mid] < e)
        {
            min = mid + 1;
        }
        else if (arr[mid] > e)
        {
            max = mid - 1;
        }
        else
            max = min - 1;
    }

    return -1;

}


int main()

{

    int n;
    cout << "Enter the numbers in the Array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int e;
    cout << "Enter the Element you want to search using Binary Search :";
    cin >> e;
    sort(arr, arr + n);
    int index = BinarySearch(arr, n, e);
    if (index == -1)
    {
        cout << "The element " << e << " is not present in the Array";
    }
    else
    {
        cout << "The Element " << e << " is present at index " << index;
    }
    
}