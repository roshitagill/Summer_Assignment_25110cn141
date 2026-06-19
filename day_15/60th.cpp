#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cout << "Enter number of elements:";
   cin >> n;
   vector<int> v1;
   v1.reserve(n);
   for (int i = 0; i < n; i++)
   {
      int m;
      cin >> m;
      v1.push_back(m);
   }

   for (int i = 0; i < n; i++)
   {
      if (v1[i] == 0)
      {
         v1.erase(v1.begin() + i);
         v1.emplace_back(0);
      }
   }
   for (int num : v1)
   {
      cout << num << " ";
   }
   return 0;
}