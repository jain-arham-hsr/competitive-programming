#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int w, h, n;
    cin >> w >> h >> n;

    int numRows = 1;
    int numCols = 1;
    int width = w;
    int height = h;

    while (n > 0) {
        if ((width + w) < (height + h)) {
            width += w;
            n -= numRows;
            numCols++;
        } else {
            height += h;
            n -= numCols;
            numRows++;
        }
    }
    cout << max(width, height);

    return 0;
}
