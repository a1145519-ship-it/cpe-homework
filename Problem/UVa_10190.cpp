#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b;
    while (cin >> a >> b) {
        if (a < 2 || b < 2 || a < b) {
            cout << "Boring!" << '\n';
            continue;
        }
        vector<long long> seq;
        seq.push_back(a);
        bool boring = false;
        while (a != 1) {
            if (a % b != 0) {
                boring = true;
                break;
            }
            a /= b;
            seq.push_back(a);
        }
        if (boring) {
            cout << "Boring!" << '\n';
        } else {
            for (size_t i = 0; i < seq.size(); ++i) {
                if (i) cout << ' ';
                cout << seq[i];
            }
            cout << '\n';
        }
    }
    return 0;
}
