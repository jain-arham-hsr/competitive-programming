#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int numOfBlockRows = n / 2;
        int numOfBlockCols = m / 2;
        for (int i = 0; i < numOfBlockRows; i++) {
            for (int j = 0; j < numOfBlockCols; j++) {
                if ((i + j) % 2 == 0) {
                    cout << "0 1 ";
                } else {
                    cout << "1 0 ";
                }
            }
            cout << "\n";
            for (int j = 0; j < numOfBlockCols; j++) {
                if ((i + j) % 2 == 0) {
                    cout << "1 0 ";
                } else {
                    cout << "0 1 ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
