#include<iostream>
using namespace std;
int main(){
    int n;
    int m = 0;
    int product = 1;
    cout<<"choose a number of your choice:";
    cin>> n;
    while(n>0){
        m = n % 10;
        product = m * product;
        n = n / 10;
        
    }
    cout<<"product of digits of your chosen number is: " << product<<endl;
    return 0;
}