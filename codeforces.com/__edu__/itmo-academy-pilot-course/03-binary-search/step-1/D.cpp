#include <bits/stdc++.h>
using namespace std;

int leftClosest(vector<int> &nums, int query) {
    int left = -1;
    int right = nums.size();
    while (left + 1 < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < query)
            left = mid;
        else
            right = mid;
    }
    return left;
}

int rightClosest(vector<int> nums, int query) {
    int left = -1;
    int right = nums.size();
    while (left + 1 < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] <= query)
            left = mid;
        else
            right = mid;
    }
    return right;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> nums(n);

    for (auto &x : nums)
        cin >> x;

    sort(nums.begin(), nums.end());

    int T;
    cin >> T;
    while (T--) {
        int l, r;
        cin >> l >> r;
        cout << (rightClosest(nums, r) - leftClosest(nums, l) - 1) << " ";
    }
    return 0;
}
