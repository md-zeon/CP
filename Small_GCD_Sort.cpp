#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        vector<int> players(N);
        for (int i = 0; i < N; i++) {
            players[i] = i + 1;
        }

        sort(players.begin(), players.end(), [N](int a, int b) {
            int scoreA = gcd(a, N);
            int scoreB = gcd(b, N);
            if (scoreA != scoreB) return scoreA > scoreB;
            return a < b;
        });

        for (int i = 0; i < N; i++) {
            if (i) cout << ' ';
            cout << players[i];
        }
        cout << '\n';
    }

    return 0;
}