#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int a, b;
        long long x, y;
        cin >> a >> b >> x >> y;
        int diff = b - a;
        if (diff < 0) {
            if (a - b == 1 && (a & 1 > 0)) {
                cout << y << "\n";
            } else {
                cout << -1 << "\n";
            }
            continue;
        }
        long long cost = 0;
        int currentA = a;
        while (currentA != b) {
            if (((currentA & 1) == 0) && y < x) {
                cost += y;
                currentA++;
            } else {
                cost += x;
                currentA++;
            }
        }
        cout << cost << "\n";
    }
    return 0;
}
