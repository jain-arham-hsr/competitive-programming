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
        if (n % 2 != 0) {
            if (k % 2 == 0 || n < k) {
                cout << "NO" << "\n";
            } else {
                cout << "YES" << "\n";
                for (int i = 0; i < k - 1; i++) {
                    cout << "1 ";
                }
                cout << n - (k - 1) << "\n";
            }
        } else {
            if (n < 2 * k) {
                if ((n - (k - 1)) % 2 <= 0) {
                    cout << "NO" << "\n";
                } else {
                    cout << "YES" << "\n";
                    for (int i = 0; i < k - 1; i++) {
                        cout << "1 ";
                    }
                    cout << n - (k - 1) << "\n";
                }
            } else {
                cout << "YES" << "\n";
                for (int i = 0; i < k - 1; i++) {
                    cout << "2 ";
                }
                cout << n - 2 * (k - 1) << "\n";
            }
        }
    }
    return 0;
}
