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
        long long evenSum = 0;
        vector<long long> oddDandelionFields;
        oddDandelionFields.reserve(n);
        for (int i = 0; i < n; i++) {
            long long num;
            cin >> num;
            if (num % 2 == 0)
                evenSum += num;
            else
                oddDandelionFields.push_back(num);
        }
        if (oddDandelionFields.size() == 0) {
            cout << 0 << "\n";
            continue;
        }
        long long res = evenSum;
        sort(oddDandelionFields.begin(), oddDandelionFields.end());
        for (int i = oddDandelionFields.size() / 2;
             i < oddDandelionFields.size(); i++) {
            res += oddDandelionFields[i];
        }
        cout << res << "\n";
    }
    return 0;
}
