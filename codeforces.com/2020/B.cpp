#include <bits/stdc++.h>
using namespace std;

long long numOfPerfectSquares(long long num) {
    return static_cast<long long>(floor(sqrtl(num)));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        long long res = n;
        while (res - numOfPerfectSquares(res) != n) {
            res = n + numOfPerfectSquares(res);
        }
        cout << res << "\n";
    }
    return 0;
}
