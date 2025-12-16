#include <bits/stdc++.h>
using namespace std;

int getMinCoins(int n, int c, vector<int> a) {
    int res = 0;
    vector<int> below_thres;
    below_thres.reserve(a.size());
    for (auto &x : a) {
        if (x <= c)
            below_thres.push_back(x);
    }
    res += n - below_thres.size();
    vector<int> turns_allowed = below_thres;
    for (auto &y : turns_allowed) {
        y = (int) log2(c / y);
    }
    sort(turns_allowed.begin(), turns_allowed.end());
    int i = 0;
    for (auto &z : turns_allowed) {
        if (z >= i) {
            i++;
        } else {
            res++;
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        cout << getMinCoins(n, c, a) << "\n";
    }
    return 0;
}
