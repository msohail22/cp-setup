#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ll long long

void solve() {
    double lon, lat;
    cin >> lon >> lat;
    if ((lon <= 180.0 && lon >= -180.0) && (lat <= 90.0 && lat >= -90.0)) cout << "VALID\n";
    else cout << "INVALID\n";
}

int main() {
    int x, y, n;
    cin >> x >> y >> n;
    for (int i = 1; i <= n; i++) {
        if (i % x == 0 && i % y == 0) cout << "FizzBuzz\n";
        else if (i % x == 0 && i % y != 0) cout << "Fizz\n";
        else if (i % x != 0 && i % y == 0) cout << "Buzz\n";
        else cout << i << "\n";
    }
    return 0;
}
