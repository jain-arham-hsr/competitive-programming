#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        vector<int> b(m);
        for (auto &x : b)
            cin >> x;
        int i = 0, j = 0;
        vector<int> res;
        res.reserve(n + m);
        while (i < n || j < m) {
            int old_i = i, old_j = j;
            while (i < n && a[i] <= k) {
                if (a[i] == 0)
                    k++;
                res.push_back(a[i++]);
            }
            while (j < m && b[j] <= k) {
                if (b[j] == 0)
                    k++;
                res.push_back(b[j++]);
            }
            if (i == old_i && j == old_j)
                break;
        }
        if (i < n || j < m)
            cout << "-1\n";
        else {
            for (auto &x : res)
                cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
