#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<bool> alphaExists(26);
    int uniqueCount = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (!alphaExists[s[i] - 'a'])
            uniqueCount++;
        alphaExists[s[i] - 'a'] = true;
    }
    cout << ((uniqueCount % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");

    return 0;
}
