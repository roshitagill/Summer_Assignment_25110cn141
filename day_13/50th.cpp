#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter number of elements :";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    cout << "sum of elements ~ ";
    for (int i = 0; i <= n - 1; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << '\n';
    int avg = sum / n;
    cout << "average of array ~ " << avg;
}