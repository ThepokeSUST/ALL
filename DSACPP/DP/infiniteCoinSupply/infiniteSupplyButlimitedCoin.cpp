/*
Given three integers n, k, target, and an array of coins[] of size n. Find if it is possible to make a change of target cents by using an infinite supply of each coin but the total number of coins used must be exactly equal to k.
*/

#include <iostream>
#include <vector>
using namespace std;
bool solve(vector<int> &coins, int sum, int k, int idx)
{

    if (sum == 0 && k == 0)
        return true;
    if (k < 0 || idx == coins.size())
        return false;
    bool take = false;
    if (sum >= coins[idx])
        take = solve(coins, sum - coins[idx], k - 1, idx);

    bool noTake = solve(coins, sum, k - 1, idx + 1);
    return take || noTake;
}
int makeSum(vector<int> &coins, int sum, int k)
{

    bool ans = solve(coins, sum, k, 0);
    cout<<ans;
}
int main()
{

    int n;
    cin >> n;
    vector<int> coins(n);

    for (int i = 0; i < n; i++)
        cin >> coins[i];

    int k;
    cin >> k;
    int sum;
    cin >> sum;
    makeSum(coins, sum, k);
}