#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    int numOfParticipants = 0;
    int kScore = INT_MIN;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i + 1 == k)
            kScore = x;
        if (x < kScore)
            break;
        if (x <= 0)
            break;
        numOfParticipants++;
    }
    cout << numOfParticipants;

    return 0;
}
