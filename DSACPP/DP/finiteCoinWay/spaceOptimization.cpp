#include<iostream>
#include<vector>
#include<climits>


using namespace std;

int main(){
      
    int n;
    cin>>n;
    vector<int> coins(n);
    for(int i=0;i<n;i++) cin>>coins[i];
    
    int sum;
    cin>>sum;

    vector<int> cur(sum+1,0),pre(sum+1,0);
    pre[0]=1;
    if(sum>=coins[0])
        pre[coins[0]]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<=sum;j++){
             
             int take=0;
         if(j>=coins[i])
             take=pre[j-coins[i]];
         int noTake=pre[j];
         cur[j]=take+noTake;    
        }
        pre=cur;
    }
    cout<<pre[sum];
    
}
