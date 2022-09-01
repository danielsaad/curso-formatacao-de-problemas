#include <bits/stdc++.h>

using namespace std;

int N, C;
vector<pair<int, int>> v;

bool cmp(const tuple<int, int> &a, const tuple<int, int> &b)
{
   return get<0>(a) < get<0>(b);
}

int main()
{
   ios::sync_with_stdio(false);
   cin >> N >> C;
   v.resize(N);
   for (int i = 0; i < N; i++)
   {
      cin >> v[i].first;
      v[i].second = i + 1;
   }
   sort(v.begin(), v.end());
   bool found = false;
   for (int i = v.size() - 1; i >= 0; i--)
   {
      auto &[x, idx] = v[i];
      auto ans = make_tuple(idx, -1);
      auto to_find = make_pair(C - x, -1);
      auto range = equal_range(v.begin(), v.end(), to_find, cmp);
      for (auto it = range.first; it != range.second; it++)
      {
         if (idx != it->second)
         {
            ans = {idx, it->second};
            found = true;
            break;
         }
      }
      auto &[a, b] = ans;
      if (b != -1)
      {
         cout << a << ' ' << b << endl;
         break;
      }
   }
   if (!found)
   {
      cout << "-1\n";
   }
   return 0;
}