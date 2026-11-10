#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
//      For Division 1: 1900≤rating
// For Division 2: 1600≤rating≤1899
// For Division 3: 1400≤rating≤1599
// For Division 4: rating≤1399
    if (n <= 1399) cout << "Division 4\n";
    else if (n >= 1400 && n <= 1599) cout << "Division 3\n";
    else if (n >= 1600 && n <= 1899) cout << "Division 2\n";
    else if (n >= 1900) cout << "Division 1\n";
}

bool is_lucky(int n) {
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '4' && s[i] != '7') return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int arr[] = {
    4, 7,
    44, 47, 74, 77,
    444, 447, 474, 477,
    744, 747, 774, 777
    };
    for (int i = 0; i < 13; i++) {
        if (n % arr[i] == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
