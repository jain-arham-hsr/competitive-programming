#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    if (n == 3) {
        cout << 24;
        return 0;
    }

    cout << 3 * (long long)(pow(4, n - 3)) * (3 * n - 1);

    return 0;
}
