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
        vector<int> input(n);
        for (auto &x : input)
            cin >> x;
        bool canBeSorted = false;
        for (int i = 1; i < input.size(); i++) {
            if (input[i] % 2 != input[i - 1] % 2) {
                canBeSorted = true;
                break;
            }
        }
        if (canBeSorted) {
            sort(input.begin(), input.end());
        }
        for (auto &x : input)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
