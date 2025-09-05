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
    vector<int> DP(sum+1,0);

    DP[0]=1;

    for(int i=coins.size()-1;i>=0;i--){
          
        for(int j=coins[i];j<=sum;j++){
              DP[j]=DP[j-coins[i]]+DP[j];
        }
    }

    cout<<DP[sum];

    
}