#include <bits/stdc++.h>
using namespace std;

int modBy = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        vector<int> b(n);
        for (auto &x : b)
            cin >> x;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        long long res = 1;
        int pt = n - 1;
        int c = 0;
        for (int i = n - 1; i >= 0; i--) {
            while (pt >= 0 && a[pt] > b[i]) {
                pt--;
                c++;
            }
            if (c < 1) {
                res = 0;
                break;
            }
            res *= c % modBy;
            c--;
            res %= modBy;
        }
        cout << res << "\n";
    }
    return 0;
}
