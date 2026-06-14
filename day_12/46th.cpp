#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int n){
     
    int digit = 0;
    int r = 0;
    int arr[10];
    int remainder;
    int s;
    s = n;
    
    while (n > 0)
    {
        remainder = n % 10;
        n = n / 10;

        arr[r] = remainder;
        digit++;
        r++;
    }
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        sum = sum + round(pow(arr[i], digit));
    }

    if (sum == s)
    {
        cout << "The given number is Armstrong";
    }
    else
    {
       cout<< "The given number is not an Armstrong ";
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter a number to check if it is Armstrong:";
    cin>>n;
    cout<<armstrong(n);
    return 0;
}