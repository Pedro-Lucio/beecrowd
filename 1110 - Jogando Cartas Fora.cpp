#include <iostream>
#include <deque>
using namespace std;

int main() {
    cout.tie(0), cin.tie(0);
    
    deque<int> d;
    int n;

    while (cin >> n) {
        if (!n) break;

        for (int i = 1; i <= n; ++i) {
            d.push_back(i);
        }

        bool f = true;
        cout << "Discarded cards: ";
        while (d.size() > 1) {
            int t = d.front();
            d.pop_front();

            if (f) f = false;
            else cout << ", ";
            cout << t;

            t = d.front();
            d.pop_front();
            d.push_back(t);
        }
        cout << endl;

        cout << "Remaining card: " << d.front() << endl;
        d.pop_front();
    }

    return 0;
}
