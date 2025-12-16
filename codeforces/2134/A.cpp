#include <iostream>

using namespace std;

string isSymmetric(int n, int a, int b) {
  if (n % 2 != b % 2)
    return "NO";
  if (n % 2 != a % 2 && a > b)
    return "NO";
  return "YES";
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, a, b;
    cin >> n >> a >> b;
    cout << isSymmetric(n, a, b) << "\n";
  }
}
