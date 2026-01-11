#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  long theoremsAttended = 0;
  vector<int> theorems(n);
  vector<long long> maskedTheorems(n);
  for (int i = 0; i < n; i++) {
    cin >> theorems[i];
  }
  vector<int> isAwake(n);
  for (int j = 0; j < n; j++) {
    int awakeStatus;
    cin >> awakeStatus;
    isAwake[j] = awakeStatus;
    if (awakeStatus == 0) {
      maskedTheorems[j] = theorems[j];
    } else {
      theoremsAttended += theorems[j];
      maskedTheorems[j] = 0;
    }
  }
  vector<long long> maskedTheoremsPrefixSum(n);
  partial_sum(maskedTheorems.begin(), maskedTheorems.end(),
              maskedTheoremsPrefixSum.begin());
  long long theoremsSaved = 0;
  for (int l = 0; l <= n - k; l++) {
    long long diff;
    if (l == 0) {
      diff = maskedTheoremsPrefixSum[k - 1];
    } else {
      diff = maskedTheoremsPrefixSum[l + k - 1] - maskedTheoremsPrefixSum[l - 1];
    }
    if (diff > theoremsSaved) {
      theoremsSaved = diff;
    }
  }
  cout << theoremsAttended + theoremsSaved;
  return 0;
}
