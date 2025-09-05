#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> w(n), p(n);
    for (int i = 0; i < n; i++) cin >> w[i];
    for (int i = 0; i < n; i++) cin >> p[i];

    int W;
    cin >> W;

    vector<int> dp(W + 1, 0);

    // Bottom-Up DP with 1D array (iterate items)
    for (int i = n - 1; i >= 0; i--) {
        for (int weight = W; weight >= w[i]; weight--) {
            dp[weight] = max(dp[weight], p[i] + dp[weight - w[i]]);
        }
    }

    cout << dp[W];
}

