#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        vector<int> count(2);
        int n = s.size();
        for (int i = 0; i < n; i++) {
            count[s[i] - '0']++;
        }
        int tLength = n;
        for (int i = 0; i < n; i++) {
            if (--count[!(s[i] - '0')] < 0) {
                tLength = i;
                break;
            }
        }
        cout << n - tLength << "\n";
    }
    return 0;
}
