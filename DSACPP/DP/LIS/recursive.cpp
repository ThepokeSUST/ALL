#include<iostream>
#include<vector>



using namespace std;


int lis(vector<int> &coins,int cur,int pre){
      
    if(cur<0) return 0;
     int take=0;
    if(pre==-1 || coins[pre]>=coins[cur]){
        take=1+lis(coins,cur-1,cur);
    }
    int noTake=lis(coins,cur-1,pre);
    return max(take,noTake);
}
int main(){
      int n;
      cin>>n;
      vector<int> coins(n);

      for(int i=0;i<n;i++) cin>>coins[i];
      cout<<lis(coins,n-1,-1);

      
}