#include<iostream>
using namespace std;
int main() {
    int n;
    int i;
    int divisor = 0;
    cout<<"enter a number to check its prime or not:";
    cin>> n;
    for(i=2; i<n; i++){
       if ( n % i == 0){
        divisor++;
        }   
     }
     if(divisor==0){
        cout<<"the number is prime";
     }  
     else{
        cout<<"the number is not prime";
     }
    
   
    return 0;

}