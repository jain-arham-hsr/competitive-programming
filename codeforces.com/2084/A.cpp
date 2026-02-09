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
        if (n % 2 == 0) {
            cout << "-1\n";
            continue;
        }
        cout << n << " ";
        for (int i = 1; i < n; i++) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
