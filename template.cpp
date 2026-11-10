#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

const ll INF = 4e18;
const int MOD = 1e9 + 7;

#ifdef LOCAL
#define dbg(...) (cerr << "[" << #__VA_ARGS__ << "] = ", dbg_out(__VA_ARGS__))
inline void dbg_out() { cerr << "\n"; }
template <class T, class... R> void dbg_out(const T& first, const R&... rest) {
    cerr << first;
    if constexpr (sizeof...(rest)) cerr << ", ";
    dbg_out(rest...);
}
#else
#define dbg(...)
#endif

void solve() {

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(10);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
