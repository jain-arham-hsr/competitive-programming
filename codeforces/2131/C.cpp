#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        multiset<long long> s;
        multiset<long long> t;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            s.insert(num);
        }
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            t.insert(num % k);
        }
        vector<vector<long long>> bothValid;
        bothValid.reserve(n);
        for (auto &x : s) {
            int possibility1 = x % k;
            int possibility2 = abs(k - (x % k));
            auto it1 = t.find(possibility1);
            auto it2 = t.find(possibility2);
            if (it1 != t.end() && it2 != t.end()) {
                bothValid.push_back({possibility1, possibility2});
            } else if (it1 != t.end()) {
                t.erase(it1);
            } else if (it2 != t.end()) {
                t.erase(it2);
            }
        }
        for (int i = 0; i < bothValid.size(); i++) {
            int possibility1 = bothValid[i][0];
            int possibility2 = bothValid[i][1];
            auto it1 = t.find(possibility1);
            auto it2 = t.find(possibility2);
            if (it1 != t.end()) {
                t.erase(it1);
            } else if (it2 != t.end()) {
                t.erase(it2);
            }
        }
        if (t.size() > 0)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }
    return 0;
}
