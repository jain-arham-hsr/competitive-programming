#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        s.replace(s.size() - 2, 2, "i");
        cout << s << "\n";
    }
    return 0;
}
