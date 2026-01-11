#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        long long totalPossiblePositions = (i * i) * (i * i - 1LL) / 2LL;
        long long restrictedPositions = 4LL * (i - 1) * (i - 2);
        cout << totalPossiblePositions - restrictedPositions << "\n";
    }

    return 0;
}
