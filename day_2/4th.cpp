#include<iostream>
using namespace std;
int main(){
    int n;
    int rn=0;
    int remainder;
    int pn;
    cout<<"palindrom is a number that reads same forward and backward.\n";
    cout<<"check whether number of your choice is a palindrom, enter the number: ";
    cin>> n;
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