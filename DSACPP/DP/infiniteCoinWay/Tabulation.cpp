#include <bits/stdc++.h>

using namespace std;

int makeSumWay(vector<int> &coins, int sum, int idx, vector<vector<int>> &DP)
{

    if (idx == coins.size() - 1)
    {
        return sum % coins[idx] == 0;
    }
    if (sum == 0)
        return 1;
    if (DP[idx][sum] != -1)
        return DP[idx][sum];
    int take = 0;
    if (sum >= coins[idx])
        take = makeSumWay(coins, sum - coins[idx], idx, DP);
    int noTake = makeSumWay(coins, sum, idx + 1, DP);

    return DP[idx][sum] = take + noTake;
}
int main()
{

    int n;
    cin >> n;

    vector<int> coins(n);

    for (int i = 0; i < n; i++)
        cin >> coins[i];

    int sum;
    cin >> sum;
    vector<vector<int>> DP(n, vector<int>(sum + 1));
    for (int i = 0; i <= sum; i++)
    {
        if (i % coins[coins.size() - 1] == 0)
        {
            DP[coins.size() - 1][i] = (i % coins[coins.size() - 1]) == 0;
        }
    }

    for (int i = coins.size() - 2; i >= 0; i--)
    {

        for (int j = 0; j <= sum; j++)
        {
            int take = 0;
            if (j >= coins[i])
                take = DP[i][j - coins[i]];
            int noTake = DP[i + 1][j];
            DP[i][j] = take + noTake;
        }
    }
    cout<<DP[0][sum];
}