#include <bits/stdc++.h>

using namespace std;

int makeSumWay(vector<int> &coins, int sum, int idx,vector< vector<int> > &DP)
{

    if (idx == coins.size() - 1)
    {
        return sum % coins[idx] == 0;
    }
    if(sum==0) return 1;
    if(DP[idx][sum]!=-1) return DP[idx][sum];
    int take = 0;
    if (sum >= coins[idx])
        take = makeSumWay(coins, sum - coins[idx], idx,DP);
    int noTake = makeSumWay(coins, sum, idx + 1,DP);

    return DP[idx][sum]=take + noTake;
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
    vector< vector<int>> DP(n,vector<int> (sum+1,-1));
    cout << makeSumWay(coins, sum, 0,DP);
}