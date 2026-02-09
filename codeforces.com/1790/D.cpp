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
        int prevHeight = 0;
        int res = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] != nums[i - 1] + 1)
                prevHeight = 0;
            int currHeight = 1;
            while (i + 1 < n && nums[i + 1] == nums[i]) {
                i++;
                currHeight++;
            }
            res += max(0, currHeight - prevHeight);
            prevHeight = currHeight;
        }
        cout << res << "\n";
    }
    return 0;
}
