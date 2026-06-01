#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int i;
    int j;
    cout << "enter the range you want to find prime numbers\n";
    cout << "from::";
    cin >> num1;
    cout << "to::";
    cin >> num2;
    cout << "prime numbers in this range are\n";
    for (i = num1; i <= num2; i++)
    {
        int prime = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                prime++;
            }
        }
        if (prime == 2)
        {
            cout << i << " \n";
        }
    }

    return 0;
}