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

    vector<int> DP(sum + 1);
    for (int i = 0; i <= sum; i++)
    {
        if (i % coins[0] == 0)
            DP[i] = i / coins[0];
        else
            DP[i] = INT_MAX;
    }

    for(int i=1;i<coins.size();i++){
         
        for(int j=coins[i];j<=sum;j++){
            if(DP[j-coins[i]]!=INT_MAX)
            DP[j]=min(DP[j],DP[j-coins[i]]+1);
        }
    }
    cout<<DP[sum];
}