#include <bits/stdc++.h>

using namespace std;

int makesum(vector<int> &coins, int sum, int idx,vector<vector<int>>&DP)
{

    if (sum < 0)
        return INT_MAX;
    if (idx == coins.size() - 1)
    {

        if (sum % coins[idx] == 0)
            return sum / coins[idx];
        return INT_MAX;
    }
    if(DP[idx][sum]!=-1) return DP[idx][sum];
    int take = INT_MAX;
    if (sum >= coins[idx])
        take = makesum(coins, sum - coins[idx], idx,DP);
    if (take != INT_MAX)
        take += 1;
    int noTake = makesum(coins, sum, idx + 1,DP);

    return DP[idx][sum]=min(take, noTake);
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

    vector< vector<int> > DP(n,vector<int> (sum+1,-1));
    cout << makesum(coins, sum, 0,DP);
}