#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.size();
    vector<int> nums(4);
    for (int i = 0; i < n; i += 2) {
        nums[s[i] - '0']++;
    }
    string res(n, '+');
    int cur = 0;
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < nums[i]; j++) {
            res[cur] = '0' + i;
            cur += 2;
        }
    }
    cout << res;
    return 0;
}
