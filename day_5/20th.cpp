#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    int s = 1;
    cout << "enter:";
    cin >> n;
    if (n == 1)
    {
        s = 1;
    }
    else
    {
        while (n % 2 == 0)
        {
            n = n / 2;
            s = 2;
        }
        for (i = 3; i * i <= n; i += 2)
        {
            while (n % i == 0)
            {
                n = n / i;
                s = i;
            }
        }
    }
    if (n > 2)
    {
        s = n;
    }
    cout << s;
}