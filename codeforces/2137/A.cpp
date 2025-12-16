#include <cmath>
#include <iostream>

using namespace std;

long long getPrevVal(long long k, long long x) {
  if (k == 0)
    return x;
  if ((x - 1) % 3 == 0 && x != 1) {
    return getPrevVal(k - 1, (x - 1) / 3);
  } else {
    return getPrevVal(k - 1, 2 * x);
  }
}

long long getPrevVal2(long long k, long long x) {
  if (k == 0)
    return x;
  return getPrevVal2(k - 1, 2 * x);
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    long long k, x;
    cin >> k >> x;
    cout << getPrevVal2(k, x) << "\n";
    // cout << x * pow(2, k) << "\n";
    // cout << getPrevVal(k, x) << "\n";
  }
  return 0;
}
