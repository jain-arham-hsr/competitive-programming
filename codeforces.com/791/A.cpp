#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    double a, b;
    cin >> a >> b;
    cout << floor(log10(a / b) / log10(2.0 / 3.0)) + 1;
    return 0;
}
