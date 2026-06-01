#include<iostream>
using namespace std;
int main(){
    int n;
    int m = 0;
    int sum = 0;
    cout<<"choose a number of your choice:";
    cin>> n;
    while(n>0){
        m = n % 10;
        sum = m + sum;
        n = n / 10;
        
    }
    cout<< sum<<endl;
    return 0;

}