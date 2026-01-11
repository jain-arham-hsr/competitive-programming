#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int minCount = INT_MAX;
        int currentCount = count(s.begin(), s.begin() + k, 'W');
        minCount = min(minCount, currentCount);
        for (int i = k; i < s.length(); i++) {
            if (s[i] == 'W') {
                currentCount++;
            }
            if (s[i - k] == 'W') {
                currentCount--;
            }
            minCount = min(minCount, currentCount);
        }
        cout << minCount << "\n";
    }
    return 0;
}
