#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int x, y;
        cin >> x >> y;

        if (y - 1 == x) {
            cout << "YES\n";
            continue;
        } else if ((y - 1 - x) < 0 && (y - 1 - x) % 9 == 0) {
            cout << "YES\n";
            continue;
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
