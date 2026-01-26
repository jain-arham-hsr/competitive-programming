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
        vector<int> nums(n);
        for (auto &x : nums)
            cin >> x;
        set<int> b(nums.begin(), nums.end());
        int mex = 0;
        while (b.count(mex))
            mex++;
        cout << min(k - 1, mex) << "\n";
    }
    return 0;
}
