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
        vector<int> nums(n);
        for (auto &x : nums)
            cin >> x;

        bool ok = true;
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] % gcd(nums[i - 1], nums[i + 1]) != 0)
                ok = false;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
