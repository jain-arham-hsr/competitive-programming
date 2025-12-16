#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.length();

    int discrepancies = 0;

    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1])
            discrepancies++;
        if (discrepancies > 1) {
            cout << "NO";
            return 0;
        }
    }
    if (discrepancies == 0 && n % 2 == 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
