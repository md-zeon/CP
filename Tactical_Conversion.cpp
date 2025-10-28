#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int length;
        string S;
        cin >> length >> S;

        int oneSegmentsCount = 0;
        int currentSegmentLength = 0;
        int longestSegmentLength = 0;

        for (int i = 0; i < length; i++) {
            if (S[i] == '1') {
                currentSegmentLength++;
            } else {
                if (currentSegmentLength > 0) {
                    oneSegmentsCount++;
                    longestSegmentLength = max(longestSegmentLength, currentSegmentLength);
                    currentSegmentLength = 0;
                }
            }
        }

        if (currentSegmentLength > 0) {
            oneSegmentsCount++;
            longestSegmentLength = max(longestSegmentLength, currentSegmentLength);
        }

        if (oneSegmentsCount == 1 && longestSegmentLength >= 2) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }

    return 0;
}


/*
DRY RUN:

Input:
1
5 11100

Output:
No

Explanation:
In this case, we have one segment of '1's of length 3. Since it is the only segment and its length is >= 2, the output is "No".

The key points to note are:
1. The presence of exactly one segment of '1's.
2. The length of this segment being 2 or more.

These conditions make it impossible to convert the string to all '0's using the allowed operation.

In all other cases, the output will be "Yes".
*/
