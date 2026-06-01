#include<iostream>
using namespace std;
int main(){
    int n;
    int digit=0;
    cout<< "write a number of your choice:\n";
    cin>> n;
    while(n>0) {
        n = n/10;
        digit++;
    }
    cout<<"no of digits are "<<digit<<endl;
    return 0;
    




}