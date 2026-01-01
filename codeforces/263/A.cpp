#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int p;
    for (int i = 0; i < 25; i++) {
        int num;
        cin >> num;
        if (num == 1)
            p = i;
    }

    int row = p / 5;
    int col = p % 5;

    cout << abs(2 - row) + abs(2 - col);

    return 0;
}
