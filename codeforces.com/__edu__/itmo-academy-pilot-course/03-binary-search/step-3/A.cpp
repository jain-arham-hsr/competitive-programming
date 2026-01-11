#include <bits/stdc++.h>
using namespace std;

struct Interval {
    long long lower;
    long long upper;
};

const Interval empty = {LLONG_MAX, LLONG_MAX};

Interval intersection(Interval i0, Interval i1) {
    int L = max(i0.lower, i1.lower);
    int R = min(i0.upper, i1.upper);
    if (R < L)
        return empty;
    else
        return Interval{L, R};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> pos(n);
    vector<int> speed(n);

    for (int i = 0; i < n; i++) {
        cin >> pos[i] >> speed[i];
    }
    int t = 0;
    Interval currIntersection = empty;
    while (currIntersection.lower == empty.lower &&
           currIntersection.upper == empty.upper) {
        for (int i = 0; i < n; i++) {
            Interval range = {pos[i] - t * speed[i], pos[i] + t * speed[i]};
            currIntersection = intersection(currIntersection, range);
        }
        t++;
    }
    cout << "first: " << currIntersection.lower
         << " second: " << currIntersection.upper;

    return 0;
}
