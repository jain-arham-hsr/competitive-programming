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
        int minDigit = INT_MAX;
        while (n > 0) {
            minDigit = min(minDigit, n % 10);
            n /= 10;
        }
        cout << minDigit << "\n";
    }
    return 0;
}
