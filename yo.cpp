#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int gcd(int n, int k) {
  int ans = INT_MIN;
  for (int i = 0; i <= n; i++) {
    if (n % i == 0 && k % i == 0) {
      ans = max(ans, i);
    }
  }
  return ans;
}
void solve() {
    ll n, k;
    cin >> n >> k;
    cout << "GCD: " << gcd(n, k) << "\n"; 
}

int main() {
    fast_io();

#ifndef ONLINE_JUDGE
    (void)!freopen("input.txt", "r", stdin);
    (void)!freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    while(t--) {
      solve();
    }
    return 0;
}
