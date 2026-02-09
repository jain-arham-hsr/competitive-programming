#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long k, n, w;
    cin >> k >> n >> w;

    long long cost = k * w * (w + 1) / 2;
    if (n < cost)
        cout << cost - n;
    else
        cout << 0;

    return 0;
}
