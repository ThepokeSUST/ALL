#include<iostream>
#include<vector>

using namespace std;

int makesum(vector<int> &coins,int sum,int idx){
    

    if(sum==0)
      return 1;
    if(sum<0 || idx==coins.size())
       return 0;

    

    return makesum(coins,sum-coins[idx],idx)+makesum(coins,sum,idx+1);
}
void ways(vector<int> &coins,int sum){
    int ans= makesum(coins,sum,0);
    cout<<ans<<endl;
}

int main(){


    int n;
    cin>>n;
    vector<int> coins(n);

    for(int i=0;i<n;i++) cin>>coins[i];
    
    int sum;
    cin>>sum;
    ways(coins,sum);
}