#include <bits/stdc++.h>
using namespace std;

// Fast Input/Output
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    // Write your solution here
    
}

int main() {
    fast_io();

#ifndef ONLINE_JUDGE
    // Redirect stdin and stdout to files for local testing
    // Using (void)! to avoid compiler warnings about unused return values
    (void)!freopen("input.txt", "r", stdin);
    (void)!freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // Safely check if t was successfully read before starting the loop
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
