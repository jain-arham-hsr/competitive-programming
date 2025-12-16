#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int num;
        cin >> num;
        bool isPossible = true;
        for (int i = 0; i < 3; i++) {
            int nextNum;
            cin >> nextNum;
            if (nextNum != num) {
                isPossible = false;
            }
        }
        if (isPossible)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}
