#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long s, x;
    cin >> s >> x;
    long long d = (s - x);
    long long a = d >> 1;
    if (((d & 1) > 0) || ((x & a) > 0)) {
        cout << 0;
        return 0;
    }
    long long setBits = 0;
    while (x > 0) {
        x = x & (x - 1);
        setBits++;
    }
    long long res = static_cast<long long>(pow(2, setBits));
    if (a == 0)
        res = max(0LL, res - 2);
    cout << res;
    return 0;
}
