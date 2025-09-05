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

    vector<vector<int> > DP(n,vector<int> (sum+1,-1));
    cout<<makeSum(coins,sum,0,DP);     
}