#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int num;
        cin >> num;
        vector<int> output;
        while (num) {
            int i = log10(num);
            int faceVal = num / pow(10, i);
            int summand = faceVal * pow(10, i);
            output.push_back(summand);
            num -= summand;
        }
        cout << output.size() << "\n";
        for (auto &x : output)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
