#include <iostream>
using namespace std;
int factorial(int n)
{
    int i;
    int product = 1;
    for (i = 1; i <= n; i++)
    {
        product = product * i;
    }
    return product;
}
int main()
{
    int n;
    cout << "enter a Number you want to find factorial for:";
    cin >> n;
    cout << "factorial is!!!" << '\n'
         << factorial(n);
    return 0;
}