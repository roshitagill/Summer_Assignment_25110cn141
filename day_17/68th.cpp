#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    cout << "Enter number of Elements of first Array:";
    cin >> n1;
    vector<int> a(n1);
    cout << "Enter the Elements of first Array :" << '\n';

    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int n2;
    cout << "Enter number of second Array Elements:";
    cin >> n2;
    vector<int> b(n2);
    cout << "Enter the Elements of the second array:" << '\n';

    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    vector<int> common;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                if (common.empty() || common.back() != a[i])
                {
                    common.push_back(a[i]);
                }
            }
        }
    }

    cout << "common elements are ~ \n";
    for (int val : common)
    {
        cout << val << " ";
    }
}