#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        long long n, x, y;
        cin >> n >> x >> y;
        long long xMultCount = n / x;
        long long yMultCount = n / y;
        long long bothMultCount = (n * gcd(x, y)) / (x * y);
        yMultCount -= bothMultCount;
        xMultCount -= bothMultCount;
        long long res = 0;
        res += 0;
        long long a = n - xMultCount + 1;
        res += (xMultCount * (2 * a + (xMultCount - 1))) / 2;
        res -= (yMultCount * (yMultCount + 1)) / 2;
        cout << res << "\n";
    }
    return 0;
}
