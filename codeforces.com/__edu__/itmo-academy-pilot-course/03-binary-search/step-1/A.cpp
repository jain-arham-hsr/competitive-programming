#include <bits/stdc++.h>
using namespace std;

bool numExists(int query, vector<int> &nums) {
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == query)
            return true;
        else if (nums[mid] < query)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
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
        if (numExists(q, nums))
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}
