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
        vector<bool> isEaten(n + 1);
        int res = 0;
        for (int i = 0; i < n; i++) {
            int beauty;
            cin >> beauty;
            if (!isEaten[beauty]) {
                res++;
                isEaten[beauty] = true;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
