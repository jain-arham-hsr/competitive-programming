#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int w, h;
        long long n;
        cin >> w >> h >> n;
        int divisionsPossible = 0;
        int hDivisionsPossible = 0;
        while (w % 2 == 0) {
            divisionsPossible++;
            w /= 2;
        }
        while (h % 2 == 0) {
            divisionsPossible++;
            h /= 2;
        }
        int maxPossible = 1 << divisionsPossible;
        if (n <= maxPossible)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}
