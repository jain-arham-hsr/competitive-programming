#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

long long run(vector<long long> &prefixSum, vector<long long> &sortedPrefixSum,
              int type, int l, int r) {
  if (type == 1) {
    if (l == 0) {
      return prefixSum[r];
    } else {
      return prefixSum[r] - prefixSum[l - 1];
    }
  } else {
    if (l == 0) {
      return sortedPrefixSum[r];
    } else {
      return sortedPrefixSum[r] - sortedPrefixSum[l - 1];
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<long long> stones(n);
  for (int i = 0; i < n; i++) {
    cin >> stones[i];
  }
  vector<long long> sortedStones = stones;
  sort(sortedStones.begin(), sortedStones.end());
  vector<long long> prefixSum(n);
  vector<long long> sortedPrefixSum(n);
  partial_sum(stones.begin(), stones.end(), prefixSum.begin());
  partial_sum(sortedStones.begin(), sortedStones.end(),
              sortedPrefixSum.begin());
  int t;
  cin >> t;
  for (int j = 0; j < t; j++) {
    int type, l, r;
    cin >> type >> l >> r;
    cout << run(prefixSum, sortedPrefixSum, type, l - 1, r - 1) << "\n";
  }
  return 0;
}
