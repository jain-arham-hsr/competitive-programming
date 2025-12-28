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
        int nums[n];
        for (auto &x : nums)
            cin >> x;
        int first = 0, second = 1;
        long long x = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[first] <= -nums[second]) {
                x -= nums[second];
                second++;
            } else {
                x += nums[first];
                first = second;
                second++;
            }
        }
        cout << x << "\n";
    }
    return 0;
}
