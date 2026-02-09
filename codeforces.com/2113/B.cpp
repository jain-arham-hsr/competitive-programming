#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int w, h, a, b, x1, y1, x2, y2;
        cin >> w >> h >> a >> b >> x1 >> y1 >> x2 >> y2;
        if (abs(x2 - x1) < a) {
            if ((y2 - y1) % b != 0)
                cout << "NO\n";
            else
                cout << "YES\n";
            continue;
        }
        if (abs(y2 - y1) < b) {
            if ((x2 - x1) % a != 0)
                cout << "NO\n";
            else
                cout << "YES\n";
            continue;
        }
        if ((x2 - x1) % a != 0 && (y2 - y1) % b != 0) {
            cout << "NO\n";
            continue;
        } else {
            cout << "YES\n";
            continue;
        }
    }
    return 0;
}
