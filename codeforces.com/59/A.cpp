#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.length();

    int uppercase = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] <= 90)
            uppercase++;
    }

    bool toLowercase = true;
    if (uppercase > n / 2) {
        toLowercase = false;
    }

    for (int i = 0; i < n; i++) {
        if (s[i] > 64 && s[i] < 91 && toLowercase) {
            s[i] += 32;
        } else if (s[i] > 96 && s[i] < 123 && !toLowercase) {
            s[i] -= 32;
        }
    }

    cout << s;

    return 0;
}
