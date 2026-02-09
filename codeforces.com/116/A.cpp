#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int maxCap = 0;
    int currCap = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        currCap += b - a;
        maxCap = max(maxCap, currCap);
    }

    cout << maxCap << "\n";

    return 0;
}
