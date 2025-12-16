#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        string discard;
        getline(cin, discard);
        getline(cin, discard);
        getline(cin, discard);
        cout << (long long)n + m << "\n";
    }
    return 0;
}
