#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    while (n < 9999) {
        n++;
        bool isValid = true;
        string num = to_string(n);
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (num[i] == num[j])
                    isValid = false;
            }
        }
        if (isValid)
            break;
    }

    cout << n;
    return 0;
}
