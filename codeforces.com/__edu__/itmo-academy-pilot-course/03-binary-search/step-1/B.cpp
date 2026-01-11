#include <bits/stdc++.h>
using namespace std;

int leftClosest(int query, vector<int> &nums) {
    int left = -1;
    int right = nums.size();
    while (left + 1 < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] <= query)
            left = mid;
        else
            right = mid;
    }
    return left + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int T;

    cin >> n >> T;

    vector<int> nums(n);
    for (int &x : nums)
        cin >> x;

    while (T--) {
        int q;
        cin >> q;
        cout << (leftClosest(q, nums)) << "\n";
    }
    return 0;
}
