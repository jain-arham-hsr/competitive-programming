#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int n = s.size();
        int res = 0;
        if (s[0] == 'u') {
            res++;
            s[0] = 's';
        }
        if (s[n - 1] == 'u') {
            res++;
            s[n - 1] = 's';
        }
        int uCount = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'u')
                uCount++;
            else {
                res += max(0, uCount / 2);
                uCount = 0;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
