#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    vector<long long> nums(n);
    for (auto &x : nums)
        cin >> x;

    vector<long long> prefixArr(n);
    partial_sum(nums.begin(), nums.end(), prefixArr.begin());

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
            cout << prefixArr[r] << "\n";
        else
            cout << prefixArr[r] - prefixArr[l - 1] << "\n";
    }
    return 0;
}
