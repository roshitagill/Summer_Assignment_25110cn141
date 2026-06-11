#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    int j = 1;

    cout << "enter number of rows:";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << '\n';
    }
}