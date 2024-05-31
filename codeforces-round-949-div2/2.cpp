#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

int solve(int l, int r) {
    int maxScore = 0;
    for (int i = r; i >= l; --i) {
        int score = 0;
        int x = i;
        while (x > 1) {
            bool divided = false;
            for (int p = 2; p <= x; ++p) {
                if (x % p == 0) {
                    x /= p;
                    score++;
                    divided = true;
                    break;
                }
            }
            if (!divided) break;
        }
        maxScore = max(maxScore, score);
    }
    return maxScore;
}

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << solve(l, r) << endl;
    }

    return 0;
}

