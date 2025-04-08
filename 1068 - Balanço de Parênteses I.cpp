#include <iostream>
using namespace std;

int main() {
  string e;
  int i, t, p;
  
  while (cin >> e) {
    p = 0;
    t = e.length();
    for (i = 0; i < t; ++i) {
      if (e[i] == '(') ++p;
      else if (e[i] == ')') {
        if (p > 0) --p;
        else break;
      }
    }
    if (i == t && p == 0) cout << "correct" << endl;
    else cout << "incorrect" << endl;
  }
  
  return 0;
}
