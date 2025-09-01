#include <bits/stdc++.h>

using namespace std;

int makeSumWay(vector<int> &coins, int sum, int idx)
{

    if (idx == coins.size() - 1)
    {
        return sum % coins[idx] == 0;
    }
    if(sum==0) return 1;
    int take = 0;
    if (sum >= coins[idx])
        take = makeSumWay(coins, sum - coins[idx], idx);
    int noTake = makeSumWay(coins, sum, idx + 1);

    return take + noTake;
}
int main()
{

    int n;
    cin >> n;

    vector<int> coins(n);

    for (int i = 0; i < n; i++)
        cin >> coins[i];

    int sum;
    cin >> sum;
    cout << makeSumWay(coins, sum, 0);
}