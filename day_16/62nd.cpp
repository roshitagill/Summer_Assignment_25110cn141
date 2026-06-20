#include <bits/stdc++.h>
using namespace std;
int freq(int n, int arr[], int s, int f)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            f++;
        }
    }
    return f;
}
int main()
{
    int n;
    cout << "Enter number of Elements:";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of the array:" << '\n';
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s;
    cout << "Enter the Element whose frequency you want to find:";
    cin >> s;
    int fr;
    fr = freq(n, arr, s, 0);
    cout << "Frequency of " << s << " is ~ " << fr;
}
