#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    if (n == 1 || n == 2 || n == 145 || n == 40585)
    {
        cout << "The given number is Strong Number";
    }
    else
    {
        cout << "The given number is not a Strong Number";
    }
    return 0;
}