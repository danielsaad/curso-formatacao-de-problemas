#include <bits/stdc++.h>

using namespace std;

int N, C;
vector<int> v;

int main()
{
   ios::sync_with_stdio(false);
   cin >> N >> C;
   v.resize(N);
   for (auto &x : v)
   {
      cin >> x;
   }
   bool found = false;
   for (size_t i = 0; i < v.size() && !found; i++)
   {
      for (size_t j = i + 1; j < v.size() && !found; j++)
      {
         if (v[i] + v[j] == C)
         {
            cout << i + 1 << ' ' << j + 1 << endl;
            found = true;
         }
      }
   }
   if(!found){
      cout << "-1\n";
   }
   return 0;
}