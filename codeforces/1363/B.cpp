#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int n = s.length();
        char one = '1';
        int succeedingOnes = count(s.begin(), s.end(), one);
        int res = min(succeedingOnes, n - succeedingOnes);
        int preceedingZeroes = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                preceedingZeroes++;
            } else {
                succeedingOnes--;
            }
            res = min(res, min(preceedingZeroes + succeedingOnes,
                               n - preceedingZeroes - succeedingOnes));
        }
        cout << res << "\n";
    }
    return 0;
}
