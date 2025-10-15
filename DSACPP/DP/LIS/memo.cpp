#include<iostream>
#include<vector>



using namespace std;


int lis(vector<int> &coins,int cur,int pre,vector< vector<int>> &DP){
      
    if(cur<0) return 0;
     int take=0;
     if(DP[cur][pre+1]!=-1) return DP[cur][pre+1];
    if(pre==-1 || coins[pre]>=coins[cur]){
        take=1+lis(coins,cur-1,cur,DP);
    }
    int noTake=lis(coins,cur-1,pre,DP);
    return DP[cur][pre+1]=max(take,noTake);
}
int main(){
      int n;
      cin>>n;
      vector<int> coins(n);
      vector< vector<int> > DP(n,vector<int> (n+1,-1));
      for(int i=0;i<n;i++) cin>>coins[i];
      cout<<lis(coins,n-1,-1,DP);

      
}