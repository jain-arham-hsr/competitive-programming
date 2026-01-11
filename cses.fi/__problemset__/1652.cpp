#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    vector<vector<int>> rowPrefixSum;

    for (int i = 0; i < n; i++) {
        vector<int> currPrefixSum(n);
        char x;
        cin >> x;
        currPrefixSum[0] = (x == '*');
        for (int j = 1; j < n; j++) {
            cin >> x;
            currPrefixSum[j] = currPrefixSum[j - 1];
            currPrefixSum[j] += (x == '*');
        }
        rowPrefixSum.push_back(currPrefixSum);
    }

    while (q--) {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        y1--;
        x1--;
        y2--;
        x2--;
        int res = 0;
        for (int i = y1; i <= y2; i++) {
            if (x1 == 0)
                res += rowPrefixSum[i][x2];
            else
                res += rowPrefixSum[i][x2] - rowPrefixSum[i][x1 - 1];
        }
        cout << res << "\n";
    }
    return 0;
}
