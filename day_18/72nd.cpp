#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the numbers in the Array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>() );
    cout<<"Array in descending order is ~\n";
     for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}