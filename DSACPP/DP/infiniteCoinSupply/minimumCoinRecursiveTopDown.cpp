#include <iostream>
#include <vector>

using namespace std;

int needMinCoin(vector<int> &coins, int w, int idx, int size, vector<vector<int>> &DP)
{
    if (w == 0)
    {
        return 0;
    }
    if (idx == size)
    {
        return INT16_MAX;
    }

    if (DP[idx][w] != -1)
        return DP[idx][w];
    int take = INT16_MAX;
    if (w >= coins[idx])
        take = needMinCoin(coins, w - coins[idx], idx, size, DP);
    if (take != INT16_MAX)
        take += 1;

    int noTake = needMinCoin(coins, w, idx + 1, size, DP);

    return DP[idx][w] = min(take, noTake);
}
void solve(vector<int> &coins, int w)
{

    vector<vector<int>> DP(coins.size(), vector<int>(w + 1, -1));
    cout << needMinCoin(coins, w, 0, coins.size(), DP);
}
int main()
{

    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    int w;
    cin >> w;
    solve(coins, w);
}