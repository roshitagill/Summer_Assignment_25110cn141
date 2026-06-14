#include<iostream>
using namespace std;
int palindrome(int n){
    int rn=0;
    int remainder;
    int pn;
    pn = n;
    while(n>0){
        remainder = n % 10;
        rn = rn*10 + remainder;
        n = n/10;
    }
    if(pn == rn){
        cout<<"the number you have chosen is palindrom";
    }
    else {
        cout<<"the number you have chosen is not palindrom";
    }
    return 0;
}
int main(){
    int n;
    cout<<"check whether number of your choice is a palindrom, enter the number: ";
    cin>> n;
    cout<<palindrome(n);
    return 0;
}