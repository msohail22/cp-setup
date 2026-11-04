#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    map<int, int> freq_multiples;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (max(arr[i], arr[j]) % min(arr[i], arr[j]) == 0 && abs(arr[i] - arr[j]) % min(arr[i], arr[j]) == 0) {
                freq_multiples[i]++;
                cout << "max: " << max(arr[i], arr[j]) << ", " << "min: " << min(arr[i], arr[j]) << "\n"; 
            }
        }
    }
    cout << "\n";
    cout << "the array is : ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
    cout << "the map starts from : " << "\n";
    for (auto ele : freq_multiples) {
        cout << ele.first << " : " << ele.second << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
