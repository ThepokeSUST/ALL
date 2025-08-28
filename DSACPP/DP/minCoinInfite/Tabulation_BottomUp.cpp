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
    vector<vector<int> > DP(n,vector<int>(sum+1,INT_MAX));
 
    for(int i=0;i<=sum;i++)
    {
        if(i%coins[0]==0)
           DP[0][i]=i/coins[0];

        // else DP[0][i]=INT_MAX;   
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=sum;j++){
    //         cout<<DP[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    for(int i=1;i<n;i++){
          
        for(int j=0;j<=sum;j++){
               int take=INT_MAX;
             if(j>=coins[i]){
                take=DP[i][j-coins[i]]+1;
             }
             int noTake=DP[i-1][j];
             DP[i][j]=min(take,noTake);
        }
    }
    // cout<<minCoin(coins, n - 1, sum,DP);

    //  for(int i=0;i<n;i++){
    //     for(int j=0;j<=sum;j++){
    //         cout<<DP[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    cout<<DP[n-1][sum];
}