#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, t;
    cin >> s >> t;
    if (s.size() != t.size()) {
        cout << "NO";
        return 0;
    }
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] != t[n - 1 - i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
