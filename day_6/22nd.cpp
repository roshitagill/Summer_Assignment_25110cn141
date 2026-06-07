#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    int i;
    int t = 0;
    int h = 0;
    cout << "enter a binary number:";
    cin >> n;
    while (n > 0)
    {
        i = n % 10;
        t = pow(2, h);
        sum = sum + t * i;
        h++;
        n = n / 10;
    }
    cout << "decimal number for the given binary number is:";
    cout << sum;
    return 0;
}