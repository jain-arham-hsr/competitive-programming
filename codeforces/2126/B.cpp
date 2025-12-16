#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        int consecutiveCount = 0;
        int res = 0;
        for (int i = 0; i < n; i++) {
            bool a;
            cin >> a;
            if (!a)
                consecutiveCount++;
            else
                consecutiveCount = 0;
            if (consecutiveCount == k) {
                if (i < n - 1) {
                    cin >> a;
                    i++;
                }
                consecutiveCount = 0;
                res++;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
