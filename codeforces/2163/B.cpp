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
        vector<int> permutation(n);
        for (auto &x : permutation)
            cin >> x;
        string binString;
        cin >> binString;
        if (binString[0] == '1' || binString[n - 1] == '1')
            cout << -1 << "\n";
        for (int i = 1; i < n; i++) {
            if (permutation[i] == 1 || permutation[i] == n) {
                if (binString[i] == '1')
                    return
            }
        }
    }
    return 0;
}
