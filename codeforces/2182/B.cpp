#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        int maxAB = max(a, b);
        int minAB = min(a, b);
        long long currVal = 1;
        long long evenSum = 0;
        long long oddSum = 0;
        bool isEven = true;
        long long currentComp = evenSum;
        long long prevComp = oddSum;
        int n = 0;
        while (currentComp <= maxAB && prevComp <= minAB) {
            if (isEven) {
                evenSum += currVal;
            } else {
                oddSum += currVal;
            }
            n++;
            // cout << evenSum << " ";
            // cout << oddSum << " ";
            // cout << "\n";
            prevComp = currentComp;
            currentComp = isEven ? evenSum : oddSum;
            currVal *= 2;
            isEven = !isEven;
        }
        cout << (--n) << "\n";
    }
    return 0;
}
