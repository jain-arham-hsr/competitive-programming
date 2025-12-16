#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int maxLength = 0;
    int currentLength = 0;

    long long lastNum = INT_MIN;

    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        if (lastNum < num) {
            currentLength++;
        } else {
            currentLength = 1;
        }
        lastNum = num;
        maxLength = max(maxLength, currentLength);
    }

    cout << maxLength << "\n";

    return 0;
}
