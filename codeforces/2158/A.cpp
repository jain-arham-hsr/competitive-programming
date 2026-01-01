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
        int y, r;
        cin >> y >> r;
        cout << min(y / 2 + r, n) << "\n";
    }
    return 0;
}
