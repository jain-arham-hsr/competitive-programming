#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        long long n, k;
        cin >> n >> k;
        long long remainingNumsCount = n - k + 1;

        vector<long long> nums(k);
        for (auto &x : nums)
            cin >> x;

        string res = "YES";

        if (k == 1) {
            cout << res << "\n";
            continue;
        }

        long long lastDiff = nums[1] - nums[0];
        for (int i = 2; i < k; i++) {
            long long currentDiff = nums[i] - nums[i - 1];
            if (lastDiff > currentDiff)
                res = "NO";
            lastDiff = currentDiff;
        }

        if (remainingNumsCount * (nums[1] - nums[0]) < nums[0])
            res = "NO";

        cout << res << "\n";
    }
    return 0;
}
