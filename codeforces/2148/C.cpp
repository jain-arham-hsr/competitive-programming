#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        long m;
        cin >> n >> m;
        long lastA = 0;
        int lastB = 0;
        long maxPoints = 0;
        for (int i = 0; i < n; i++) {
            long currA;
            int currB;
            cin >> currA >> currB;
            if (abs(currB - lastB) == 0) {
                maxPoints += currA - lastA - ((currA - lastA) % 2);
            } else {
                maxPoints += currA - lastA;
                if ((currA - lastA) % 2 == 0) {
                    maxPoints--;
                }
            }
            lastA = currA;
            lastB = currB;
        }
        maxPoints += m - lastA;
        cout << maxPoints << "\n";
    }
    return 0;
}
