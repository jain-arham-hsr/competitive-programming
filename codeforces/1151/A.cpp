#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> genome = {1, 3, 20, 7};

    int minOps = INT_MAX;
    for (int i = 0; i < n - 3; i++) {
        int currentOps = 0;
        for (int j = 0; j < 4; j++) {
            int thisAlpha = int(s[i + j]) - 64;
            int reqAlpha = genome[j];
            currentOps +=
                min(abs(reqAlpha - thisAlpha),
                    min(thisAlpha, reqAlpha) + 26 - max(thisAlpha, reqAlpha));
        }
        minOps = min(currentOps, minOps);
    }
    cout << minOps;

    return 0;
}
