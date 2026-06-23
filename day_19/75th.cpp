#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    int q;
    cout << "Enter number of rows :";
    cin >> p;
    cout << "Enter number of coloumn :";
    cin >> q;
    cout << "Enter elements of Matrice \n";
    int x = 0;
    int arr[100];

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << "(" << i << "," << j << "): ";
            cin >> arr[x];
            x++;
        }
        cout << '\n';
    }

    cout << "    Transpose of the Matrix \n";
    cout << "********************************\n";

    for (int j = 0; j < q; j++)
    {
        for (int i = 0; i < p; i++)
        {

            int index = i * q + j;
            cout << arr[index] << "  ";
        }
        cout << '\n';
    }
}