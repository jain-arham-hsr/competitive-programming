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
        string t, b;
        cin >> t;
        cin >> b;
        int lastTop = 0;
        int firstBottom = n - 1;
        cout << t[0];
        for (int i = 1; i < n; i++) {
            if (firstBottom >= i && t[i] != b[i - 1]) {
                if (t[i] == '0')
                    lastTop = i;
                else {
                    firstBottom = i - 1;
                }
            }
            if (firstBottom >= i)
                cout << t[i];
            else
                cout << b[i - 1];
        }
        cout << b[n - 1] << "\n";
        cout << (firstBottom - lastTop + 1) << "\n";
    }
    return 0;
}
