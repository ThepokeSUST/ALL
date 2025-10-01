#include<iostream>
#include<vector>
#include<climits>


using namespace std;
int way(vector<int> &coins,int idx,int sum,vector<vector<int>> &DP){
         
    if(idx==0){
        if(sum==0 || sum-coins[idx]==0) return 1;
        return 0;
    }
    if(DP[idx][sum]!=-1) return DP[idx][sum];
         int take=0;
         if(sum>=coins[idx])
             take=way(coins,idx-1,sum-coins[idx],DP);
         int noTake=way(coins,idx-1,sum,DP);
         return DP[idx][sum]=take+noTake;    
}
int main(){
      
    int n;
    cin>>n;
    vector<int> coins(n);
    for(int i=0;i<n;i++) cin>>coins[i];
    
    int sum;
    cin>>sum;
    vector< vector<int> > DP(n,vector<int> (sum+1,-1));
    cout<<way(coins,n-1,sum,DP);
}
