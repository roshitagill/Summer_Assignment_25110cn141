#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 0;
    int h = 0;
    int arr[100];
    cout << "enter a number:";
    cin >> n;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            arr[h] = i;
            h++;
        }
    }
    cout << "factors of " << n << " are:\n";
    for (i = 0; i < h; i++)
    {
        cout << arr[i] << "  ";
    }
}