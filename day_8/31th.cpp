#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    string arr[7] = {" ", "A", "B", "C", "D", "E", "F"};

    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << arr[j];
        }
        cout << '\n';
    }
}