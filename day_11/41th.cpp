#include <iostream>
using namespace std;
int sumofnumber()
{
    int num1;
    int num2;
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    return num1 + num2;
}
int main()
{
    
    cout << "sum of number is = " << sumofnumber();
    return 0;
}