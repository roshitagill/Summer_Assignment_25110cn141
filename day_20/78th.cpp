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

    if (p != q)
    {
        cout << "The matrix should be square";
        return 0;
    }
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

    bool symmetric = true;
    for (int j = 0; j < q; j++)
    {
        for (int i = 0; i < p; i++)
        {
            if (arr[i * q + j] != arr[j * q + i])
            {
                symmetric = false;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    cout<<"*******************************************************************\n";
    if (symmetric)
    {
        cout << "               Your matrix is symmetric\n";
    }
    else
    {
        cout << "              Your matrix is not symmetric\n";
    }
    cout<<"*******************************************************************\n";
}