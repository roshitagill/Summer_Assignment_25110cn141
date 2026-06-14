#include<iostream>
using namespace std;
int pern(int n){
    int i = 0;
    int h = 0;
    int arr[100];
    int s;
    s = n;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            arr[h] = i;
            h++;
        }
    }
    int sum = 0;
    int j = 0;
    for (j = 0; j < h; j++)
    {
        sum = sum + arr[j];
    }
    if (s == sum)
    {
        cout << "The number you have chosen is a Perfect Number which is ~ ";
    }
    else
    {
        cout << "The number you have chosen is not a Perfect Number which is ~ ";
    }
    return n;
}
int main(){
    int n;
    cout<<"Enter a number to check if its Perfect:";
    cin>>n;
    cout<<pern(n);
    return 0;
}