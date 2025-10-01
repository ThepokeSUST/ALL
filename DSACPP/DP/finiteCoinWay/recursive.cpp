#include<iostream>
#include<vector>
#include<climits>


using namespace std;
int way(vector<int> &coins,int idx,int sum){
         
    if(idx==0){
        if(sum==0 || sum-coins[idx]==0) return 1;
        return 0;
    }
         int take=0;
         if(sum>=coins[idx])
             take=way(coins,idx-1,sum-coins[idx]);
         int noTake=way(coins,idx-1,sum);
         return take+noTake;    
}
int main(){
      
    int n;
    cin>>n;
    vector<int> coins(n);
    for(int i=0;i<n;i++) cin>>coins[i];

    int sum;
    cin>>sum;
    cout<<way(coins,n-1,sum);
}
