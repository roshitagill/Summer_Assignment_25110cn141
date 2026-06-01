#include<iostream>
using namespace std;
int main(){
    int n;
    int rn=0;
    int remainder;
    cout<<"enter a number you want to reverse";
    cin>> n;
    while(n>0){
        remainder = n % 10;
        rn = rn*10 + remainder;
        n = n/10;
    }
    cout<< "your reversed number is: "<< rn <<endl;
    return 0;
}