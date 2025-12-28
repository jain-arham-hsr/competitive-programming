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
        long long currX = nums[0];
        for (int i = 1; i < n - 1; i++) {
            currX += abs(nums[i]);
        }
        long long maxX = currX;
        for (int i = n - 2; i > 0; i--) {
            currX -= abs(nums[i]);
            currX -= nums[i + 1];
            maxX = max(currX, maxX);
        }
        currX -= nums[0] + nums[1];
        maxX = max(currX, maxX);
        cout << maxX << "\n";
    }
    return 0;
}
