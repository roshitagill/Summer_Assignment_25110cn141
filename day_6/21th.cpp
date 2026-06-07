#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 0;
    int remainder = 0;
    int t = 0;
    int arr[100];

    cout << "Enter a Decimal Number to convert it into Binary:";
    cin >> n;
    while (n > 0)
    {
        remainder = n % 2;
        arr[t] = remainder;
        t++;
        n = n / 2;
    }
    cout << "Your binary number is: ";
    for (i = t - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
}