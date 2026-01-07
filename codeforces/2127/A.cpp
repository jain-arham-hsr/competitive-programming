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
        int lastNum = -1;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num == -1)
                continue;
            if (num == 0)
                ok = false;
            if (lastNum != -1 && num != lastNum)
                ok = false;
            else if (lastNum == -1)
                lastNum = num;
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
