#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int minVal = 1;
    bool needsMult = false;
    int currentFactor = 2;
    int lastPower = 0;
    int maxPower = 1;
    while (n > 1) {
        if (n % currentFactor == 0)
            minVal *= currentFactor;
        int power = 0;
        while (n % currentFactor == 0) {
            n /= currentFactor;
            power++;
        }
        if (lastPower != 0 && power != 0 && lastPower != power) {
            needsMult = true;
            lastPower = power;
        }
        if (floor(log2(power)) != log2(power)) {
            needsMult = true;
        }
        maxPower = max(power, maxPower);
        currentFactor++;
        if (lastPower == 0)
            lastPower = power;
    }
    cout << minVal << " " << ceil(log2(maxPower)) + needsMult << "\n";
    return 0;
}
