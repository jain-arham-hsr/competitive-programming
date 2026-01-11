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
        int res = 0;
        int minNum = INT_MAX;
        for (int i = 0; i < min(n, 2); i++) {
            cout << res << "\n";
            int num;
            cin >> num;
            if (num < minNum)
                minNum = num;
            res += minNum;
            cout << res << "\n";
            if (num == 0 or i == min(n, 2) - 1) {
                string temp;
                getline(cin, temp);
                getline(cin, temp);
                break;
            }
        }
        cout << res << "\n" << "\n";
    }
    return 0;
}
