#include <bits/stdc++.h>

using namespace std;

int minCoin(vector<int> &coins, int idx, int sum,vector<vector<int> > &DP)
{

    if(DP[idx][sum]!=-1)
       return DP[idx][sum];
    // if(sum==0)
    //    return 0;
    if(idx==0){
        if(sum%coins[idx]==0)
        return sum/coins[idx];
        else
          return INT_MAX;
    }
    int take = INT_MAX;
    if (sum >= coins[idx])
    {
        take = minCoin(coins, idx, sum - coins[idx],DP);
        if (take != INT_MAX)
            take++;
    }
    int noTake = minCoin(coins, idx - 1, sum,DP);
    return DP[idx][sum]=min(take, noTake);
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
    int sum;
    cin >> sum;
    vector<vector<int> > DP(n,vector<int>(sum+1,-1));
    cout<<minCoin(coins, n - 1, sum,DP);
}