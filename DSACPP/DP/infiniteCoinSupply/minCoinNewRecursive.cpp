#include<iostream>
#include<vector>
// #include<climits>

using namespace std;

int minCoin(vector<int> &coins,int sum,int idx){
          
    if(idx==coins.size()-1){
        if(sum%coins[idx]==0){
            return sum/coins[idx];
        }
        else
          return INT16_MAX;
    }
    if(sum==0)
       return 0;

    int take=INT16_MAX;
    if(sum>=coins[idx]){
        take=minCoin(coins,sum-coins[idx],idx);
        if(take!=INT16_MAX) take++;
    }
    int noTake=minCoin(coins,sum,idx+1);

    return min(take,noTake);
}
void Solve(vector<int> &coins,int sum){
      
      int ans=minCoin(coins,sum,0);
      cout<<ans<<endl;
}
int main(){
    int n;
    cin>>n;

    vector<int> coins(n);
    for(int i=0;i<n;i++)
        cin>>coins[i];
    
        int sum;
        cin>>sum;

    Solve(coins,sum);    
}