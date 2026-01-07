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
        int a = nums[0];
        bool areAllSame = true;
        for (int i = 1; i < n; i++) {
            if (nums[i] != a) {
                areAllSame = false;
                break;
            }
        }
        if (areAllSame) {
            cout << "1" << "\n";
            continue;
        }
        int dir = 0;
        int res = 2;
        for (int i = 1; i < n; i++) {
            int diff = nums[i] - nums[i - 1];
            // cout << diff << "\n";
            if (diff > 0) {
                if (dir == -1)
                    res++;
                dir = 1;
            } else if (diff < 0) {
                if (dir == 1)
                    res++;
                dir = -1;
            }
            // cout << res << "\n";
        }
        cout << res << "\n";
    }
    return 0;
}
