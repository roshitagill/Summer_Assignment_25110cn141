#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements:";
    cin >> n;
    int arr[n];
    int d;
    cout << "Enter the elements of the array:" << '\n';
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"enter the number you want to right rotate the array\n";
    cin>>d;
    d = d%n;
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i]=arr[n-d+i];
    }
    for(int i=n-d-1; i>=0; i--){
        arr[i+d]=arr[i];
    }
    for(int i=0; i<d; i++){
        arr[i]=temp[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}