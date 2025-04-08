#include <iostream>
using namespace std;

int main() {
  string s;
  int n, l, r, p; cin >> n;
  
  for (int k = 0; k < n; ++k) {
    cin >> s;
    r = 0;
    p = 0;
    l = s.length();
    for (int i = 0; i < l; ++i) {
      if (s[i] == '<') ++p;
      else if (s[i] == '>' && p > 0) {
        --p;
        ++r;
      }
    }
    cout << r << endl;
  }
  
  return 0;
}
