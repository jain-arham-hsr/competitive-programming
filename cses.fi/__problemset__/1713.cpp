#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    int n = 1e6;
    vector<int> numOfDivisors(n + 1, 2);
    numOfDivisors[0] = 0;
    numOfDivisors[1] = 1;
    for (long long i = 2; i <= n; i++) {
        for (long long j = i * i; j <= n; j += i) {
            numOfDivisors[j]++;
            if (j / i != i)
                numOfDivisors[j]++;
        }
    }
    while (T--) {
        int m;
        cin >> m;
        cout << numOfDivisors[m] << "\n";
    }
    return 0;
}
