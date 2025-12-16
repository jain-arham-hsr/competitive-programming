#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s1, s2;
    cin >> s1;
    cin >> s2;
    int n = s1.length();

    for (int i = 0; i < n; i++) {
        char char1 = s1[i] > 96 ? s1[i] - 96 : s1[i] - 64;
        char char2 = s2[i] > 96 ? s2[i] - 96 : s2[i] - 64;
        if (char1 < char2) {
            cout << -1;
            return 0;
        } else if (char2 < char1) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
