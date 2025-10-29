#include <bits/stdc++.h>
using namespace std;

long long int MAX_X = 1e18;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        set<long long int> a;
        for (int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            a.insert(x);
        }

        long long int smallestX = -1;

        for (long long int val : a)
        {
            bool found = false;
            for (long long int x = 2; x <= MAX_X; x++)
            {
                if (gcd(x, val) == 1)
                {
                    smallestX = x;
                    found = true;
                    break;
                }
            }
            if (found)
            {
                break;
            }
        }

        cout << smallestX << "\n";
    }

    return 0;
}