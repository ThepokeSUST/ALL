#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int minCoin(vector<int> &coin,int idx,int sum,vector< vector<int> > &DP){
      
     if(idx==0){
          if(sum%coin[0]==0) return sum/coin[idx];
          return INT_MAX;
     }
     if(DP[idx][sum]!=-1) return DP[idx][sum];
    int take=INT_MAX;
     if(sum>=coin[idx]){
        take= minCoin(coin,idx,sum-coin[idx],DP);
     }
     if(take!=INT_MAX)
        take++;
     int noTake=minCoin(coin,idx-1,sum,DP);

     return DP[idx][sum]= min(take,noTake);

}
int main(){
    int n;
    cin>>n;
    vector<int> coin(n);
    for(int i=0;i<n;i++) cin>>coin[i];
     int sum;
    cout<<"enter target ";
    cin>>sum;
    vector< vector<int> > DP(n,vector<int> (sum+1,-1));
   
    cout<<minCoin(coin,n-1,sum,DP);
}