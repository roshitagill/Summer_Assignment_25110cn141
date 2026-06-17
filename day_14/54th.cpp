#include <iostream>
using namespace std;
int main()
{
    int n;
    int freq = 0;
    int arr[] = {1, 2, 3, 4, 3, 2, 3, 4, 5, 6, 5, 8, 7, 9, 0, 8, 9, 7, 6, 5, 4, 0, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter a element from 0-9:" << '\n';
    cin >> n;
    for (int i = 0; i < size; i++)
    {
        if (n == arr[i])
        {
            freq++;
        }
    }
    cout << freq << " is the freq of " << n;
}