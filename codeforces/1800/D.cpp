#include <bits/stdc++.h>
using namespace std;

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
        int res = n - 1;
        for (int i = 2; i < n; i++) {
            if (s[i] == s[i - 2])
                res--;
        }
        cout << res << "\n";
    }
    return 0;
}
