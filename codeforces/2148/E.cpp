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
        unordered_map<int, int> count;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            count[num]++;
        }
        bool isPossible = true;
        for (auto it = count.begin(); it != count.end(); it++) {
            if (it->second % k != 0) {
                isPossible = false;
                break;
            }
            count[it->first] %= k;
        }
        if (!isPossible) {
            cout << 0;
            continue;
        }
        int windowSize = 0;
        for (auto it = count.begin(); it != count.end(); it++) {
            windowSize += it->second;
            
        }
    }
    return 0;
}
