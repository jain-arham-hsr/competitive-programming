#include <iostream>
#include <vector>

using namespace std;

void run(int n, vector<int> b, vector<int> counts) {
  int lastNum = 0;
  vector<int> remainingCounts = counts;
  vector<int> lastVal(n + 1);
  vector<int> res(n);
  for (int i = 0; i < n; i++) {
    int curr = b[i];
    if (counts[curr] % curr != 0) {
      cout << -1;
      return;
    }
    if (remainingCounts[curr] % curr == 0) {
      lastNum++;
      lastVal[curr] = lastNum;
    }
    remainingCounts[curr]--;
    res[i] = lastVal[curr];
  }
  for (int j = 0; j < n; j++) {
    cout << res[j] << " ";
  }
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> b(n);
    vector<int> counts(n + 1, 0);
    for (int j = 1; j <= n; j++) {
      int num;
      cin >> num;
      counts[num]++;
      b[j - 1] = num;
    }
    run(n, b, counts);
    cout << "\n";
  }
  return 0;
}
