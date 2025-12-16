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
        int score = 0;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num == 0)
                score += 1;
            else
                score += num;
        }
        cout << score << "\n";
    }
    return 0;
}
