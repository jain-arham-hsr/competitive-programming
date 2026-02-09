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
        if (k % (n - 1) == 0) {
            cout << (k / (n - 1)) * n - 1 << "\n";
        } else {
            cout << (k / (n - 1)) * n + (k % (n - 1)) << "\n";
        }
    }
    return 0;
}
