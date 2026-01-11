#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int y, x;
        cin >> y >> x;

        long long step = max(y, x);
        // cout << "step: " << step << "\n";
        long long lastNumOfLastStep = (step - 1) * (step - 1);

        // cout << "lastSteps: " << lastNumOfLastStep << "\n";

        long long currStepNums;
        if (step % 2 == 0) {
            currStepNums = (step - x) + y;
        } else {
            currStepNums = (step - y) + x;
        }

        cout << lastNumOfLastStep + currStepNums << "\n";
    }
    return 0;
}
