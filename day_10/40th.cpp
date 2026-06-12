#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    int j = 1;
    string arr[11] = {" ", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

    cout << "enter number of rows:";
    cin >> n;
    if (n < 10)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            for (j = 1; j <= i; j++)
            {
                cout << arr[j];
            }
            for (j = i - 1; j >= 1; j--)
            {
                cout << arr[j];
            }
            cout << '\n';
        }
    }
    else
    {
        cout << "enter number smaller then 10";
    }
}