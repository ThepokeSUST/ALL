

#include<iostream>
#include<vector>



using namespace std;


int lis(vector<int> &coins,int cur,int pre,vector< vector<int>> &DP){
      
    if(cur>=coins.size()) return 0;
     int take=0;
     if(DP[cur][pre+1]!=-1) return DP[cur][pre+1];
    if(pre==-1 || coins[pre]<coins[cur]){
        take=1+lis(coins,cur+1,cur,DP);
    }
    int noTake=lis(coins,cur+1,pre,DP);
    return DP[cur][pre+1]=max(take,noTake);
}
int main(){
      int n;
      cin>>n;
      vector<int> coins(n);
      vector< vector<int> > DP(n,vector<int> (n+1,-1));
      for(int i=0;i<n;i++) cin>>coins[i];
      cout<<lis(coins,0,-1,DP);
      cout<<endl;

      for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            cout<<DP[i][j]<<" ";
        }
        cout<<endl;
      }

      vector< vector<int> > dp(n+1,vector<int> (n+1,0));
      for(int i=n-1;i>=0;i--){
        for(int j=i-1;j>=-1;j--){
           int take=0;
           if(j==-1 || coins[j]<coins[i]){
        take=1+dp[i+1][i+1];
    }
    int noTake=dp[i+1][j+1];
    dp[i][j+1]=max(take,noTake);

        }
      }

      cout<<dp[0][0];
      
}