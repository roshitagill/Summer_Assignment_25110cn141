#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> intrArr;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            intrArr.push_back(a[i]);
            i++;
            j++;
        }
    }
    return intrArr;
}
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
    vector<int> result = sortedArray(a, b);

    cout << "Intersection of Sorted Arrays is ~ ";
    for (int val : result)
    {
        cout << val << " ";
    }
}