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
        string s;
        cin >> s;
        int currentZeroCount = 0;
        int maxZeroCount = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0')
                currentZeroCount++;
            else {
                maxZeroCount = max(maxZeroCount, currentZeroCount);
                currentZeroCount = 0;
            }
        }
        if (currentZeroCount > 0) {
            int i = 0;
            for (int i = 0; s[i] != '1'; i++) {
                currentZeroCount++;
            }
            maxZeroCount = max(maxZeroCount, currentZeroCount);
        }
        cout << maxZeroCount << "\n";
    }
    return 0;
}
