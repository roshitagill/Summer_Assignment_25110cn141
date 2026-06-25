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

    int r;
    int s;
    cout << "Enter number of rows :";
    cin >> r;
    cout << "Enter number of coloumn :";
    cin >> s;
    cout << '\n';

    if (q != r)
    {
        cout << "enter valid number of rows and coloumn";
        return 0;
    }

    cout << "Enter elements of Matrice 2 \n";
    int y = 0;
    int arr2[100];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << "(" << i << "," << j << "): ";
            cin >> arr2[y];
            y++;
        }
        cout << '\n';
    }

    int arr3[100] = {0};
    int t = 0;

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < s; j++)
        {
            int sum = 0;
            for (int k = 0; k < q; k++)
            {
                sum = sum + arr[i * q + k] * arr2[k * s + j];
            }
            arr3[i * s + j] = sum;
        }
        cout << '\n';
    }

    cout << "   Multiplication of two matrices is\n";
    cout << "**************************************\n";
    int h = 0;

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < s; j++)
        {

            cout << arr3[h] << "    ";
            h++;
        }
        cout << '\n';
    }
    return 0;
}