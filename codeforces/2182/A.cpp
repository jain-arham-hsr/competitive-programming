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
        string newYear = "2026";
        string oldYear = "2025";
        bool hasNewYear = false;
        bool hasOldYear = false;
        for (int i = 0; i < n - 3; i++) {
            bool currHasNewYear = true;
            bool currHasOldYear = true;
            for (int j = 0; j < 4; j++) {
                if (s[i + j] != newYear[j]) {
                    currHasNewYear = false;
                }
                if (s[i + j] != oldYear[j]) {
                    currHasOldYear = false;
                }
            }
            if (currHasNewYear)
                hasNewYear = true;
            if (currHasOldYear)
                hasOldYear = true;
        }
        if (hasNewYear || !hasOldYear)
            cout << "0\n";
        else
            cout << "1\n";
    }
    return 0;
}
