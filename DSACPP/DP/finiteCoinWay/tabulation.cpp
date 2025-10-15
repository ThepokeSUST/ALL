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
    cout<<way(coins,n-1,sum,DP)<<endl;
    vector< vector<int> > DP(n,vector<int> (sum+1,0));
    DP[0][0]=1;
    DP[0][coins[0]]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<=sum;j++){
             int take=0;
         if(j>=coins[i])
             take=DP[i-1][j-coins[i]];
         int noTake=DP[i-1][j];
            DP[i][j]=take+noTake;   
        }
    }
}
