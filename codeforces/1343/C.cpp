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
        long long res = 0;
        int num;
        cin >> num;
        bool isPositive = num > 0;
        int maxNum = num;
        for (int i = 0; i < n - 1; i++) {
            cin >> num;
            if (num > 0 == isPositive) {
                maxNum = max(num, maxNum);
            } else {
                res += maxNum;
                maxNum = num;
                isPositive = !isPositive;
            }
        }
        res += maxNum;
        cout << res << "\n";
    }
    return 0;
}
