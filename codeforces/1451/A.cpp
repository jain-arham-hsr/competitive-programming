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
        if (n <= 3) {
            cout << n - 1 << "\n";
            continue;
        }
        if (n % 2 == 0)
            cout << 2 << "\n";
        else
            cout << 3 << "\n";
    }
    return 0;
}
