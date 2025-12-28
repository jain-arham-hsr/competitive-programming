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
        int yCount = 0;
        for (char c : s) {
            if (c == 'Y')
                yCount++;
            if (yCount > 1)
                break;
        }
        if (yCount > 1)
            cout << "NO";
        else
            cout << "YES";
        cout << "\n";
    }
    return 0;
}
