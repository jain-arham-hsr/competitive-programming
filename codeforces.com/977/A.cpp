#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    while (k > 0) {
        if (n % 10 >= k) {
            n -= k;
            k = 0;
        } else {
            k -= n % 10 + 1;
            n /= 10;
        }
    }
    cout << n << "\n";
    return 0;
}
