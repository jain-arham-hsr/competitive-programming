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
        vector<int> startArr(n);
        for (auto &x : startArr)
            cin >> x;
        sort(startArr.begin(), startArr.end());
        bool isPossible = true;
        for (int i = 2; i < startArr.size(); i += 2) {
            if (startArr[i] != startArr[i - 1]) {
                isPossible = false;
                break;
            }
        }
        if (isPossible)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}
