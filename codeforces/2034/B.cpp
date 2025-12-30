#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        int i = 0;
        int zeroCount = 0;
        int res = 0;
        while (i < n) {
            if (s[i] == '0') {
                zeroCount++;
            } else {
                zeroCount = 0;
            }
            if (zeroCount == m) {
                zeroCount = 0;
                i += k - 1;
                res++;
            }
            i++;
        }
        cout << res << "\n";
    }
    return 0;
}
