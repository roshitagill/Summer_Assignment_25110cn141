#include <iostream>
using namespace std;
int main()
{
    int x;
    int n;
    int i = 1;
    int prod = 1;
    cout << "enter the number:";
    cin >> x;
    cout << "enter the power:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        prod = prod * x;
    }
    cout << "result is = " << prod;
}