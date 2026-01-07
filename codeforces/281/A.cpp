#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string word;
    cin >> word;
    if (word[0] >= 'a' && word[0] <= 'z') {
        word[0] -= 32;
    }
    cout << word;

    return 0;
}
