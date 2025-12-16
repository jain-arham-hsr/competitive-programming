#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<char> digits;

    string zeroes = "";

    string num;
    cin >> num;

    for (int i = 0; i < num.size(); i++) {
        if (num[i] == '0')
            zeroes += "0";
        else
            digits.push_back(num[i]);
    }
    string res = "";

    sort(digits.begin(), digits.end());
    res += digits[0];
    res += zeroes;
    for (int i = 1; i < digits.size(); i++) {
        res += digits[i];
    }
    cout << res;

    return 0;
}
