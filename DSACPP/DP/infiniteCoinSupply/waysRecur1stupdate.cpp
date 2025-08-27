//file name is "waysRecursive1stupdated.cpp"
#include<iostream>
#include<vector>

using namespace std;

int makesum(vector<int> &coins,int sum,int idx){
    
    if(idx==coins.size()-1){
        return sum%coins[idx]==0;
    }
    if(sum==0)
      return 1;
    if(sum<0 )
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