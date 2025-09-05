#include<bits/stdc++.h>

using namespace std;

int makeSum(vector<int> &coins,int sum,int idx,vector<vector<int> > &DP){
      
       if(idx==coins.size()-1  ){
        if(sum!=0 && sum-coins[idx]==0)
        return 1;
        if(sum==0)
           return 0;
        return INT_MAX;
     }
    int take=INT_MAX;
    if(DP[idx][sum]!=-1) return DP[idx][sum];
    if(sum>=coins[idx])
        take=makeSum(coins,sum-coins[idx],idx+1,DP);
    if(take!=INT_MAX)
        take+=1;
    int noTake=makeSum(coins,sum,idx+1,DP);
    
    return DP[idx][sum]= min(take,noTake);
}
int main(){


    int n;
    cin>>n;

    vector<int> coins(n);
    for(int i=0;i<n;i++) 
         cin>>coins[i];
     
    int sum;
    cin>>sum;

    vector< vector<int> > DP(n,vector<int> (sum+1));

    for(int i=1;i<=sum;i++){
        DP[coins.size()-1][i]= i-coins[coins.size()-1]==0?1:INT_MAX;
    }
    DP[coins.size()-1][0]=0;

    for(int i=coins.size()-2;i>=0;i--){
          
        for(int j=0;j<=sum;j++){
              int take=INT_MAX;
            if(j>=coins[i]){
               take=DP[i+1][j-coins[i]];
            }
            int noTake=DP[i+1][j];
            if(take!=INT_MAX){
                DP[i][j]=min(take+1,noTake);
            }
            else
               DP[i][j]=noTake;
        }
    }
    cout<<DP[0][sum];
}