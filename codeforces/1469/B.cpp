#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int res = 0;
        for (int k = 0; k < 2; k++) {
            int n;
            cin >> n;
            long long maxSum = 0;
            long long currentSum = 0;
            for (int i = 0; i < n; i++) {
                long long num;
                cin >> num;
                currentSum += num;
                maxSum = max(currentSum, maxSum);
            }
            res += maxSum;
        }
        cout << res << "\n";
    }
    return 0;
}
