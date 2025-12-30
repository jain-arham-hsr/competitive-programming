#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int i = 0;
        for (; i < (n + 1) / 2; i++) {
            if (s[i] == s[n - 1 - i])
                break;
        }
        cout << n - 2 * (i) << "\n";
    }
    return 0;
}
