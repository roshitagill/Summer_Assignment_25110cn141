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
    cout << '\n';
    cout << "Enter elements of Matrice 1 \n";
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
    cout << "Enter elements of Matrice 2 \n";
    int y = 0;
    int arr2[100];

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << "(" << i << "," << j << "): ";
            cin >> arr2[y];
            y++;
        }
        cout << '\n';
    }

    cout << "  Addition of two matrices is\n";
    cout << "*********************************\n";

    int arr3[100];
    int s = 0;
    x = 0;
    y = 0;

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            arr3[s] = arr2[s] + arr[s];
            cout << arr3[s] << "  ";
            s++;
        }
        cout << '\n';
    }
}