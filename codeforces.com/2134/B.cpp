#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> inp(n);
        for (auto &x : inp)
            cin >> x;
        vector<long long> res(n);
        for (int i = 0; i < n; i++) {
            res[i] = inp[i] + k * (inp[i] % (k + 1));
        }
        for (auto &x : res)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
