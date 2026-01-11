#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    int count = 0;
    while (n > 0) {
        int currDigit = n % 10;
        n /= 10;
        if (currDigit == 4 || currDigit == 7)
            count++;
    }

    if (count == 4 || count == 7)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
