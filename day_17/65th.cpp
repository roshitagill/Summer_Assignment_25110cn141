#include <bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            
                unionArr.push_back(a[i]);
            
            i++;
        }
        
            
                unionArr.push_back(b[j]);
            
            j++;
        
    }
    while (j < n2)
    {
       
            unionArr.push_back(b[j]);
        
        j++;
    }
    while (i < n1)
    {
        
        
            unionArr.push_back(a[i]);
        
        i++;
    }
    return unionArr;
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
    

    int n2;
    cout << "Enter number of second Array Elements:";
    cin >> n2;
    vector<int> b(n2);
    cout << "Enter the Elements of the second array:" << '\n';

    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    
    vector<int> result = sortedArray(a, b);

    cout <<"The Merged Arrays is ~ \n";
    for (int val : result)
    {
        cout << val << " ";
    }
}