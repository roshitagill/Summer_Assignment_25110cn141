#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    int product = 1;
    cout<< "choose a number n:";
    cin>> n;
    for(i=1; i<=n; i++){
    product = product*i;
    }
    cout<< product<<endl;
    return 0;
}