#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string initial;
        cin >> initial;
        string name;
        cin >> name;
        unordered_map<char, int> charCount;
        for (int i = 0; i < initial.size(); i++) {
            charCount[initial[i]]++;
        }
        bool isPossible = true;
        for (int i = 0; i < name.size(); i++) {
            if (charCount[name[i]] == 0)
                isPossible = false;
            else {
                charCount[name[i]]--;
            }
        }
        if (isPossible)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}
