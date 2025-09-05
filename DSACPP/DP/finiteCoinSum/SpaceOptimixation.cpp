#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> coins(n);

    for (int i = 0; i < n; i++)
        cin >> coins[i];

    int sum;
    cin >> sum;
    vector<int> DP(sum+1,INT_MAX);
    vector<int> Pre(sum+1,INT_MAX);
    DP[0]=0;
    Pre[0]=0;
    for(int i=coins.size()-1;i>=0;i--){
          
        for(int j=coins[i];j<=sum;j++){
            if(Pre[j-coins[i]]!=INT_MAX)
              DP[j]=min(Pre[j-coins[i]]+1,DP[j]);
        }
        for(int k=coins[i];k<=sum;k++){
            Pre[k]=DP[k];
        }

    }

    cout<<DP[sum];

    
}