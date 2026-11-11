#include <bits/stdc++.h>
using namespace std;

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

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
