#include <bits/stdc++.h>

using namespace std;

int makesum(vector<int> &coins, int sum, int idx)
{

    if (sum < 0)
        return INT_MAX;
    if (idx == coins.size() - 1)
    {

        if (sum % coins[idx] == 0)
            return sum / coins[idx];
        return INT_MAX;
    }

    int take = INT_MAX;
    if (sum >= coins[idx])
        take = makesum(coins, sum - coins[idx], idx);
    if (take != INT_MAX)
        take += 1;
    int noTake = makesum(coins, sum, idx + 1);

    return min(take, noTake);
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

    cout << makesum(coins, sum, 0);
}