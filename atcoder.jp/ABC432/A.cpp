#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> digits(3);
    for (auto &x : digits)
        cin >> x;

    sort(digits.begin(), digits.end());
    string res = "";
    for (int i = 2; i >= 0; i--) {
        res += to_string(digits[i]);
    }
    cout << res;

    return 0;
}
