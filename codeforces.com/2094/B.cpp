#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int x = n - m;
        int lprime, rprime;
        lprime = min(l + x, 0);
        rprime = r - (x - (lprime - l));
        cout << lprime << " " << rprime << "\n";
    }
    return 0;
}
