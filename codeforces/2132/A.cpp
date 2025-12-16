#include <iostream>

using namespace std;

string createString(int n, int m, string a, string b, string c) {
  string res;
  res = a;
  for (int i = 0; i < m; i++) {
    if (c[i] == 'D') {
      res.insert(n + i, 1, b[i]);
    } else {
      res.insert(0, 1, b[i]);
    }
  }
  return res;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    int m;
    string a;
    string b;
    string c;
    cin >> n;
    cin >> a;
    cin >> m;
    cin >> b;
    cin >> c;
    string res;
    res = createString(n, m, a, b, c);
    cout << res << "\n";
  }
  return 0;
}
