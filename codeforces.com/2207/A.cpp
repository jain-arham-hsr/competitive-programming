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
        cin >> n;
        string s;
        cin >> s;
        long long resMin = 0;
        long long resMax = 0;
        long long currCount = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1' ||
                i > 0 && i < n - 1 && s[i - 1] == '1' && s[i + 1] == '1') {
                currCount++;
            } else {
                resMax += currCount;
                if (currCount % 2 == 0) {
                    if (currCount > 0)
                        resMin += currCount / 2 + 1;
                } else {
                    resMin += (currCount + 1) / 2;
                }
                currCount = 0;
            }
        }
        resMax += currCount;
        if (currCount % 2 == 0) {
            if (currCount > 0)
                resMin += currCount / 2 + 1;
        } else {
            resMin += (currCount + 1) / 2;
        }
        currCount = 0;

        cout << resMin << " " << resMax << "\n";
    }
    return 0;
}
