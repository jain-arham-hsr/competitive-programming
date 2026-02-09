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
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        if (n < 3) {
            cout << "-1\n";
            continue;
        }
        int min = 1, max = n;
        int l = 0, r = n - 1;
        bool found = false;
        while (!found && min < max && l < r) {
            if (a[l] == min) {
                min++;
                l++;
                continue;
            }
            if (a[l] == max) {
                max--;
                l++;
                continue;
            }
            if (a[r] == min) {
                min++;
                r--;
                continue;
            }
            if (a[r] == max) {
                max--;
                r--;
                continue;
            }
            found = true;
        }
        if (found)
            cout << (l + 1) << " " << (r + 1) << "\n";
        else
            cout << "-1\n";
    }
    return 0;
}
