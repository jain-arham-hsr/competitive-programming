#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, m, k, x, s;
    cin >> n >> m >> k;
    cin >> x >> s;
    vector<pair<int, int>> spellA(m + 1);
    vector<pair<int, int>> spellB(k + 1);
    spellA[0] = {0, x};
    spellB[0] = {0, 0};
    for (int i = 1; i <= m; i++)
        cin >> spellA[i].second;
    for (int i = 1; i <= m; i++)
        cin >> spellA[i].first;
    for (int i = 1; i <= k; i++)
        cin >> spellB[i].second;
    for (int i = 1; i <= k; i++)
        cin >> spellB[i].first;

    sort(spellA.begin(), spellA.end());

    int j = k;
    long long minTime = n * x;
    for (int i = 0; i <= m; i++) {
        if (spellA[i].first > s)
            break;
        int remainingMana = s - spellA[i].first;
        while (j >= 0 && spellB[j].first > remainingMana)
            j--;
        if (j < 0)
            break;
        long long currTime = (n - spellB[j].second) * spellA[i].second;
        minTime = min(minTime, currTime);
    }

    cout << minTime;

    return 0;
}
