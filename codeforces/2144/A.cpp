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

        vector<long long> numSum(n);
        partial_sum(nums.begin(), nums.end(), numSum.begin());

        bool exists = false;

        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                long long s1 = (numSum[i]) % 3;
                long long s2 = (numSum[j] - numSum[i]) % 3;
                long long s3 = (numSum[n - 1] - numSum[j]) % 3;

                if ((s1 == s2 && s2 == s3) ||
                    (s1 != s2 && s2 != s3 && s1 != s3)) {
                    cout << i + 1 << " " << j + 1 << "\n";
                    exists = true;
                    break;
                }
            }
            if (exists)
                break;
        }
        if (!exists)
            cout << "0 0" << "\n";
    }
    return 0;
}
