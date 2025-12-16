#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> inp(n);
        for (auto &x : inp)
            cin >> x;
        vector<bool> doesDivide(pow(10, 9) - 1);
        bool divisibleBy2 = false;
        for (int i = 0; i < n; i++) {
            if (inp[i] % 2 == 0) {
                divisibleBy2 = true;
                break;
            }
        }
        if (!divisibleBy2) {
            cout << 2 << "\n";
            continue;
        }
        int minIndex = 1;
        for (int i = 1; i < inp.size(); i++) {
            currIndex = minIndex;
            while (inp[i] % (2 * min))
        }
        for (int i = 0; i <)
            for (int i = 0; i < doesDivide.size(); i++) {
                doesDivide[i]
            }
    }
    return 0;
}
