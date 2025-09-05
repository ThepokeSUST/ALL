#include <bits/stdc++.h>

using namespace std;

int makeSum(vector<int> &coins, int sum, int idx)
{
     if(idx==coins.size()-1  ){
        if(sum!=0 && sum-coins[idx]==0)
        return 1;
        if(sum==0)
           return 0;
        return INT_MAX;
     }
    
//      if(sum==0)
//      return 0;
        
//    if(idx>=coins.size())
//       return INT_MAX;
 
    int take = INT_MAX;
    if (sum >= coins[idx])
        take = makeSum(coins, sum - coins[idx], idx + 1);
    if (take != INT_MAX)
        take += 1;
    int noTake = makeSum(coins, sum, idx + 1);

    return min(take, noTake);
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
    cout << makeSum(coins, sum, 0);
}