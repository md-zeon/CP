#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;
        int SEven = 0, SOdd = 0;
        for (int i = x; i <= y; i++) {
            if (i % x == 0) {
                if (i % 2 == 0) {
                    SEven += i;
                } else {
                    SOdd += i;
                }
            }
        }

        if (SEven >= SOdd) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    

    return 0;
}