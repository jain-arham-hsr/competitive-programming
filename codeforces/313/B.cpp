#include <iostream>
#include <vector>

using namespace std;

int run(string s, vector<int> &count, int l, int r) {
  int res;
  if (l == 0) {
    res = count[r];
  } else {
    res = count[r] - count[l - 1];
  }
  if (r + 1 <= count.size() - 1 && s[r + 1] == s[r]) {
    res--;
  }
  return res;
}

int main() {
  string s;
  cin >> s;
  int lastCount = 0;
  vector<int> count(s.length());
  for (int i = 0; i < s.length(); i++) {
    if (i + 1 <= s.length() - 1 && s[i] == s[i + 1]) {
      lastCount++;
    }
    count[i] = lastCount;
  }
  int t;
  cin >> t;
  for (int j = 0; j < t; j++) {
    int l, r;
    cin >> l >> r;
    cout << run(s, count, l - 1, r - 1) << "\n";
  }
  return 0;
}
