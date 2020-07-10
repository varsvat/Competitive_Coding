#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);
typedef long long ll;
/**
 * Uncomment the #define below if problem contains multiple test cases
 */
// #define MULTIPLE_TESTS 1

void solve() {
  int n;
  cin >> n;
  unordered_map<string, int> cnt;
  string s;
  for (int i = 0; i < n; ++i) {
    cin >> s;
    ++cnt[s];
  }

  cout << "AC x " << cnt["AC"];
  cout << endl;
  cout << "WA x " << cnt["WA"];
  cout << endl;
  cout << "TLE x " << cnt["TLE"];
  cout << endl;
  cout << "RE x " << cnt["RE"];
  cout << endl;
}

int main() {
  FAST_IO;
  int t = 1;
#ifdef MULTIPLE_TESTS
  cin >> t;
#endif

  while (t--) {
    solve();
  }

  return 0;
}