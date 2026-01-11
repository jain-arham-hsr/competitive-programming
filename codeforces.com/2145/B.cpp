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
        vector<int> opsCount(3);
        string ops;
        cin >> ops;
        for (int i = 0; i < ops.length(); i++) {
            opsCount[ops[i] - '0']++;
        }
        for (int i = 0; i < opsCount[0]; i++) {
            cout << "-";
        }
        if (n - k == 0) {
            for (int i = 0; i < opsCount[2]; i++) {
                cout << "-";
            }
        } else if (n - k - opsCount[2] < 0) {
            for (int i = 0; i < n - k + opsCount[2]; i++) {
                cout << "?";
            }
        } else {
            for (int i = 0; i < opsCount[2]; i++) {
                cout << "?";
            }
            for (int i = 0; i < n - k - opsCount[2]; i++) {
                cout << "+";
            }
            for (int i = 0; i < opsCount[2]; i++) {
                cout << "?";
            }
        }
        for (int i = 0; i < opsCount[1]; i++) {
            cout << "-";
        }
        cout << "\n";
    }
    return 0;
}
