#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
   int n;
   cout<<"Enter the numbers in the Array:";
   cin>>n;
   vector <int> arr(n);
   cout<<"Enter the elements in the Array\n";
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   for(int i=0; i<n-1; i++){
    
       auto min = min_element(arr.begin()+i, arr.end());
        swap(arr[i], *min);
    
   }
   for(auto it : arr){
    cout<<it<<" ";
   }
}