#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        long long num;
        cin >> num;
        cout << (1LL << static_cast<int>(log2(num))) - 1 << "\n";
    }
    return 0;
}
