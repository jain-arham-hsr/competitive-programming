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
        if (n % 2 == 0) {
            cout << (n / 2) << " " << ((n / 2) - 1) << " 1";
        } else if (n % 4 == 1) {
            cout << ((n - 3) / 2) << " " << ((n + 1) / 2) << " 1";
        } else {
            cout << ((n - 5) / 2) << " " << ((n + 3) / 2) << " 1";
        }
        cout << "\n";
    }
    return 0;
}
