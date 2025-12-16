#include <iostream>
#include <vector>

using namespace std;

void run(int n, vector<int> p) {
  for (int i = 0; i < p.size(); i++) {
    cout << n + 1 - p[i] << " ";
  }
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int j = 0; j < n; j++) {
      cin >> p[j];
    }
    run(n, p);
    cout << "\n";
  }
  return 0;
}
