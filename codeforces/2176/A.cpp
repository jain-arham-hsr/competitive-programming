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
        int maxNum = nums[0];
        int res = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < maxNum)
                res++;
            else
                maxNum = nums[i];
        }
        cout << res << "\n";
    }
    return 0;
}
