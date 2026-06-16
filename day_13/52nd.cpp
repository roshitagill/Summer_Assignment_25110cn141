#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements :";
    cin >> n;
    int arr[n];
    int arr2[100];
    int h = 0;
    int arr3[100];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 == 0)
        {
            arr2[h] = arr[j];
            h++;
        }
        else if (arr[j] % 2 != 0)
        {
            arr3[s] = arr[j];
            s++;
        }
    }
    cout << "even numbers are ~ ";
    for (int m = 0; m < h; m++)
    {
        cout << arr2[m] << ", ";
    }

    cout << "Odd numbers are ~ ";
    for (int n = 0; n < s; n++)
    {
        cout << arr3[n] << ", ";
    }
}