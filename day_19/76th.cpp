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
    
    if(p==q){
        
    cout << '\n';
    cout << "Enter elements of Matrice 1 \n";
    int x = 0;
    int arr[100];
    int sum =0;

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << "(" << i << "," << j << "): ";
            cin >> arr[x];
            if(i==j){
                sum = sum + arr[x];
            }
            x++;
        }
        cout << '\n';
    }

    cout <<"Diagnol sum of the matrix is ~ "<< sum;
}

   else{
    cout<<'\n';
    cout<<"***** Diagnol Sum is only defined for Square Matrix *****\n";
    cout<<"************* Enter valid rows and coloumn ***************";
   }
}