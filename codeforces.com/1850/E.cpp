#include <bits/stdc++.h>
using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
    return os << "(" << p.first << ", " << p.second << ")";
}

ostream &operator<<(ostream &os, const string &s) {
    for (char c : s)
        os << c;
    return os;
}

template <typename T, typename = typename T::iterator>
ostream &operator<<(ostream &os, const T &c) {
    os << "{";
    bool f = true;
    for (auto &x : c)
        os << (f ? f = false, "" : ", ") << x;
    return os << "}";
}

void debug_out() { cerr << "\n"; }
template <typename H, typename... T> void debug_out(H &&h, T &&...t) {
    cerr << h;
    if constexpr (sizeof...(t))
        cerr << ", ";
    debug_out(forward<T>(t)...);
}

#ifdef DEBUGGER
#define watch(...)                                                             \
    cerr << __func__ << ":" << __LINE__ << " | " << #__VA_ARGS__ << " = ",     \
        debug_out(__VA_ARGS__)
#else
#define watch(...) ((void)0)
#endif

// ==================================================================== //

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        long long c;
        cin >> n >> c;
        vector<int> s(n);
        for (auto &x : s)
            cin >> x;
        long long l = 0, r = c;
        while (l < r - 1) {
            long long mid = l + (r - l) / 2;
            long long req = 0;
            bool valid = true;
            for (int i = 0; i < n; i++) {
                if (s[i] + mid < 1e9 &&
                    (c - req) >= (s[i] + 2 * mid) * (s[i] + 2 * mid)) {
                    req += (s[i] + 2 * mid) * (s[i] + 2 * mid);
                } else {
                    valid = false;
                    break;
                }
            }
            if (!valid) {
                r = mid;
            } else if (req < c) {
                l = mid;
            } else {
                cout << mid << "\n";
                break;
            }
        }
    }
    return 0;
}
