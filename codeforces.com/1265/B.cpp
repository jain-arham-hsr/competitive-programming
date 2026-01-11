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

        int l = 0, r = n - 1;
        string res(n, '1');
        int minNum = n;
        for (int k = 0; k < n; k++) {
            int num;
            if (nums[l] > nums[r]) {
                num = nums[l];
                l++;
            } else {
                num = nums[r];
                r--;
            }
            int len = r - l + 1;
            for (int i = num; i <= min(len, minNum); i++) {
                res[i - 1] = '0';
            }
            minNum = min(minNum, num);
        }
        cout << res << "\n";
    }
    return 0;
}
