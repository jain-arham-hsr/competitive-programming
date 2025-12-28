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
        vector<int> nums;
        int mid = n / 2;

        for (auto &x : nums)
            cin >> x;

        int midIndex = find(nums.begin(), nums.end(), mid) - nums.begin();

        int res = 0;
        if (midIndex < mid) {
            for (int i = midIndex + 1; i < n; i++) {
                if (nums[i] < mid)
                    res++;
            }
        } else {
            for (int i = 0; i < midIndex; i++) {
                if (nums[i] > mid)
                    res++;
            }
        }
        int nextSeq = 1;
        for (int i = 0; i < midIndex; i++) {
            if (nums[i] < mid) {
                if (nums[i] != nextSeq)
                    res++;
                else
                    nextSeq++;
            }
        }
        nextSeq = mid + 1;
        for (int i = midIndex + 1; i < n; i++) {
            if (nums[i] > mid) {
                if (nums[i] != nextSeq)
                    res++;
                else
                    nextSeq++;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
