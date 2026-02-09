#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int cnt = 0;
        for (char a : s) {
            if (a == '1')
                cnt++;
        }
        if (cnt <= k) {
            cout << "Alice\n";
            continue;
        }
        if (n >= 2 * k) {
            cout << "Bob\n";
            continue;
        }
        cout << "Alice\n";
    }
    return 0;
}
