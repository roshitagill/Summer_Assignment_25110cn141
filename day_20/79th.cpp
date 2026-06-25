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
    int sum[100] = {0};
    int t = 0;
    int y = 0;
    for (int i = 0; i < p; i++)
    {
        int s = 0;
        for (int j = 0; j < q; j++)
        {
            s = s + arr[y];
            y++;
        }
        sum[t] = s;
        t++;
    }

    cout << "Row - wise sum of matrix is\n";
    for (int i = 0; i < p; i++)
    {
        cout << sum[i] << '\n';
    }
    return 0;
}