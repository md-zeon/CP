#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n < x)
        {
            cout << 0 << "\n";
        }
        else
        {
            int all_revenue = n * (n + 1) / 2;
            int max_profit = all_revenue - n * x;

            for (int i = 2; i <= n; i++)
            {
                int cost = (n - i + 1) * x;
                max_profit = max(max_profit, all_revenue - cost - ((i * (i - 1)) / 2));
            }
            cout << max_profit << "\n";
        }
    }

    return 0;
}