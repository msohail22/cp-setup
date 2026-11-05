#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    double lon, lat;
    cin >> lon >> lat;
    if ((lon <= 180.0 && lon >= -180.0) && (lat <= 90.0 && lat >= -90.0)) cout << "VALID\n";
    else cout << "INVALID\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
