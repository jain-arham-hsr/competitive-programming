#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        unordered_map<int, int> steps;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (steps[grid[i][j]] == 0)
                    steps[grid[i][j]] = 1;
                if (i != 0 && grid[i - 1][j] == grid[i][j])
                    steps[grid[i][j]] = 2;
                if (j != 0 && grid[i][j - 1] == grid[i][j])
                    steps[grid[i][j]] = 2;
            }
        }
        int totalSteps = 0;
        int maxSteps = 0;
        for (auto step : steps) {
            totalSteps += step.second;
            maxSteps = max(maxSteps, step.second);
        }
        cout << totalSteps - maxSteps << "\n";
    }
    return 0;
}
