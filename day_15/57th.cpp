#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int  arr[n];
    cout<<"Enter the elements of the array:"<<'\n';
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
   
    for(int i=0; i<n/2; i++ ){
        int m = arr[n-i-1];
        arr[n-i-1]=arr[i];
         arr[i]= m;
    }
    cout<<"your reversed array is\n";
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
}