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
        cout << (n - 1) + (n - 2) << "\n";
        for (int i = 1; i <= n; i++) {
            if (1 < i)
                cout << i << " " << 1 << " " << i << "\n";
            if (i + 1 < n)
                cout << i << " " << i + 1 << " " << n << "\n";
        }
    }
    return 0;
}
