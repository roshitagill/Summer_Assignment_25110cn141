#include <bits/stdc++.h>
using namespace std;
int pr(int sum)
{
    
     
    for (int i = 0; i <=sum; i++)
    {
        for (int j = i; j <=sum; j++)
        {
            if (i + j == sum)
            {
                cout <<"("<< i << "," << j<< ")"<<"   ";
            }
        }
    }
}
int main()
{
    cout << "Enter the Sum:";
    int sum;
    cin >> sum;
    int num;
    cout << "Pairs of the given sum is ~ \n";
    pr(sum);
    return 0;
}
