#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int m;
    int i;
    int j;
    int d1 = 0;
    int d2 = 0;
    int arr[100];
    int arr1[100];
    int r = 0;
    int k = 0;
   
    int h = 0;
    
    cout << "enter a number you want to find GCD for\n";
    cout << "enter your first number:";
    cin >> n;
    cout << "enter your second number:";
    cin >> m;
    while (n > 1)
    {
        for (i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                d1 = i;
                
                arr[r] = i;
                r++;
            }
        }
    }
    while (m > 1)
    {
        for (j = 2; j <= m; j++)
        {
            if (m % j == 0)
            {
                d2 = j;
               
                
                arr1[k] = j;
                k++;
            }
        }
    }
    int y = max(k,r);
    int arrn[y];
    for (int j = 0; j < k; j++)
    {
        for (int i = 0; i < r; i++)
        {
            if (arr1[j] == arr[i])
            { arrn[h]=arr[i];
                h++;
            }
        }
    }
    int gcd=*max_element(arrn, arrn + h);
    cout<<gcd;

    return 0;
}