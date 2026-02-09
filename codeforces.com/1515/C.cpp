#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, m, x;
        cin >> n >> m >> x;

        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;

        vector<int> res;
        res.reserve(n);

        for (int i = 0; i < m; i++) {
            pair<int, int> t = {0, i + 1};
            pq.push(t);
        }

        for (int i = 0; i < n; i++) {
            int h;
            cin >> h;
            pair<int, int> shortest = pq.top();
            pq.pop();
            pq.push({h + shortest.first, shortest.second});
            res.push_back(shortest.second);
        }

        cout << "YES\n";
        for (auto &x : res)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
