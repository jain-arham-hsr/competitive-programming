#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        int oneCount = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                oneCount++;
        }
        vector<int> res;
        res.reserve(n);
        for (int i = 0; i < n - oneCount; i++) {
            if (s[i] == '1')
                res.push_back(i + 1);
        }
        if (res.size() == 0) {
            cout << "Bob\n";
            continue;
        }
        for (int i = n - oneCount; i < n; i++) {
            if (s[i] == '0')
                res.push_back(i + 1);
        }
        cout << "Alice\n";
        cout << res.size() << "\n";
        for (auto &x : res)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
