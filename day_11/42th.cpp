#include <iostream>
using namespace std;
int max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int main()
{
    int num1;
    int num2;
    cout << "enter your first number:";
    cin >> num1;
    cout << "enter your second number:";
    cin >> num2;
    int max1 = max(num1, num2);
    cout << "maximum of these two numbers is:" << '\n'
         << max1;
    return 0;
}