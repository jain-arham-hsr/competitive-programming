#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        string p, s;
        cin >> p;
        cin >> s;
        int i = 0, j = 0;
        bool ok = true;
        while (i < p.size() && j < s.size()) {
            int a = i, b = j;
            if (p[i] != s[j]) {
                ok = false;
                break;
            }
            while (i < p.size() && p[i] == p[a])
                i++;
            while (j < s.size() && s[j] == s[b])
                j++;
            if (j - b < i - a || j - b > 2 * (i - a)) {
                ok = false;
                break;
            }
        }
        if (i != p.size() || j != s.size())
            ok = false;
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
