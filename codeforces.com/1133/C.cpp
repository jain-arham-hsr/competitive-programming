#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> skills(n);
    for (auto &x : skills)
        cin >> x;
    sort(skills.begin(), skills.end());

    int maxTeamSize = 0;

    int l = 0;
    for (int r = 0; r < n; r++) {
        while (skills[r] - skills[l] > 5)
            l++;
        maxTeamSize = max(maxTeamSize, r - l + 1);
    }

    cout << maxTeamSize;

    return 0;
}
