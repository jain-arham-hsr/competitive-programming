#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int totalJokes = a + b + c + d;
        int res = a;
        if (a > 0)
            res += 2 * min(b, c);
        else {
            if (totalJokes - res > 0)
                res++;
            cout << res << "\n";
            continue;
        }
        if (a < abs(b - c)) {
            res += a;
            if (totalJokes - res > 0)
                res++;
            cout << res << "\n";
            continue;
        } else {
            res = a + b + c;
        }
        if (a - abs(b - c) < d) {
            res += a - abs(b - c);
            if (totalJokes - res > 0)
                res++;
            cout << res << "\n";
            continue;
        } else {
            res = totalJokes;
        }

        cout << res << "\n";
    }
    return 0;
}
