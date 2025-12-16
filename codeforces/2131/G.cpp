#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<long long> s(n);
        for (auto &x : s)
            cin >> x;
        sort(s.begin(), s.end());
        long long prod = 1;
        for (int i = 0; i < n; i++) {
            if (k == 0) break;
            if (s[i] <= k) {
                k -= s[i];
                prod *= 
            } else {
                s[i]
            }
        }
    }
    return 0;
}
