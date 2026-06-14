#include<iostream>
using namespace std;
int fib(){
    int n = 0;
    int i=1;
    int m;
    cout<<"fibonacci series is as follows;\n";
    
    while(n<100){
        m = i+ n;
        n = i;
        i = m;
        cout<<n<<" ";
    }
    return 0;
}
int main(){
    cout<<fib();
}