#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << pow(min(max(a + a, b), max(b + b, a)), 2) << "\n";
    }
    return 0;
}
