#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    int product;
    cout<< "write a natural number";
    cin>> n;
    for(i=1; i<=10; i++){
     product = n*i;
     cout<< product<<endl;
    }
    return 0;
}