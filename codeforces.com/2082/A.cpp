#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;
            grid[i] = row;
        }
        int r = 0;
        for (int i = 0; i < n; i++) {
            int x = 0;
            for (int j = 0; j < m; j++) {
                x ^= grid[i][j] - '0';
            }
            r += x;
        }
        int c = 0;
        for (int i = 0; i < m; i++) {
            int x = 0;
            for (int j = 0; j < n; j++) {
                x ^= grid[j][i] - '0';
            }
            c += x;
        }
        cout << max(r, c) << "\n";
    }
    return 0;
}
