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

    int blockSize = sqrt(n);
    long long currMin = LLONG_MAX;

    vector<long long> decomp(n);

    for (int i = 0; i < n; i++) {
        currMin = min(currMin, nums[i]);
        decomp[i] = currMin;
        if (i % blockSize == blockSize - 1)
            currMin = LLONG_MAX;
    }

    // for (auto &x : decomp)
    //     cout << x << " ";
    // cout << "\n";

    while (q--) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        long long minEle = LLONG_MAX;
        for (; (a % blockSize != 0) && (a <= b); a++) {
            minEle = min(minEle, nums[a]);
        }
        a--;
        // cout << "a: " << a << "\n";
        // cout << "minEle: " << minEle << "\n";
        while (a + blockSize <= b) {
            a += blockSize;
            minEle = min(minEle, decomp[a]);
        }
        // cout << "a: " << a << "\n";
        // cout << "minEle: " << minEle << "\n";
        a++;
        for (; a <= b; a++) {
            minEle = min(minEle, nums[a]);
        }
        // cout << "a: " << a << "\n";
        // cout << "minEle: " << minEle << "\n";
        cout << minEle << "\n";
    }
    return 0;
}
