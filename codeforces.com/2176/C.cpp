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
        vector<int> odds;
        odds.reserve(n);
        vector<int> evens;
        odds.reserve(n);
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num % 2 == 0)
                evens.push_back(num);
            else
                odds.push_back(num);
        }
        sort(odds.begin(), odds.end());
        sort(evens.begin(), evens.end());
        if (odds.size() == 0) {
            for (int i = 0; i < n; i++)
                cout << 0 << " ";
            continue;
        }
        int evenR = evens.size() - 1;
        long long evenSum = 0;
        long long evenSumExceptLeast = 0;
        if (evens.size() > 0) {
            evenSum = accumulate(evens.begin(), evens.end(), 0LL);
            evenSumExceptLeast = evenSum - evens[0];
        }
        int oddsL = -1;
        long long sum = odds[odds.size() - 1];
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                cout << sum << " ";
            } else if (i <= evens.size() + 1) {
                sum += evens[evenR];
                evenR--;
                cout << sum << " ";
            } else if (i == n && odds.size() % 2 == 0) {
                cout << "0 ";
            } else {
                if (evens.size() == 0) {
                    if (i % 2 == 0)
                        cout << 0 << " ";
                    else
                        cout << odds[odds.size() - 1] << " ";
                } else if (evens.size() % 2 == 0) {
                    if (i % 2 == 0)
                        cout << evenSumExceptLeast + odds[odds.size() - 1]
                             << " ";
                    else
                        cout << evenSum + odds[odds.size() - 1] << " ";
                } else {
                    if (i % 2 == 0)
                        cout << evenSum + odds[odds.size() - 1] << " ";
                    else
                        cout << evenSumExceptLeast + odds[odds.size() - 1]
                             << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
