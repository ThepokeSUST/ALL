#include <bits/stdc++.h>

using namespace std;

int minCoin(vector<int> &coins, int idx, int sum)
{
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
        take = minCoin(coins, idx, sum - coins[idx]);
        if (take != INT_MAX)
            take++;
    }
    int noTake = minCoin(coins, idx - 1, sum);
    return min(take, noTake);
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
    cout<<minCoin(coins, n - 1, sum);
}