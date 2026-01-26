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
        int curr = 1;
        vector<int> res(n);
        for (int i = n - 1; i > 0; i--) {
            if (s[i - 1] == '<') {
                res[i] = curr;
                curr++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (res[i] == 0) {
                res[i] = curr;
                curr++;
            }
        }
        for (auto &x : res)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
