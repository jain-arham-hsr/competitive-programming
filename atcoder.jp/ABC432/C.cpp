#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x, y;
    vector<int> kids(n);

    cin >> n >> x >> y;
    for (auto &x : kids)
        cin >> x;

    int diff = y - x;

    int minCandies = INT_MAX;
    int maxCandies = INT_MIN;
    for (int i = 0; i < n; i++) {
        minCandies = min(minCandies, kids[i]);
        maxCandies = max(maxCandies, kids[i]);
    }

    long long totalLargeCandies = 0;
    int maxLargeCandies = minCandies;

    if (maxLargeCandies *)

        while (maxLargeCandies * diff + minCandies * x > maxCandies * x) {
            maxLargeCandies--;
        }

    if (maxLargeCandies == 0) {
        cout << 0;
        return 0;
    } else if (maxLargeCandies < 0) {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if ((kids[i] - maxLargeCandies) % diff != 0) {
            cout << -1;
            return 0;
        }
        int numOfReplacements = (kids[i] - minCandies) / diff;
        if (numOfReplacements < kids[i]) {
            cout << -1;
            return 0;
        }
        totalLargeCandies -= numOfReplacements;
    }

    return 0;
}
