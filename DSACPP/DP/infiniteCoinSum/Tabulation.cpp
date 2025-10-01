#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int minCoin(vector<int> &coin, int idx, int sum, vector<vector<int>> &DP)
{

    if (idx == 0)
    {
        if (sum % coin[0] == 0)
            return sum / coin[idx];
        return INT_MAX;
    }
    if (DP[idx][sum] != -1)
        return DP[idx][sum];
    int take = INT_MAX;
    if (sum >= coin[idx])
    {
        take = minCoin(coin, idx, sum - coin[idx], DP);
    }
    if (take != INT_MAX)
        take++;
    int noTake = minCoin(coin, idx - 1, sum, DP);

    return DP[idx][sum] = min(take, noTake);
}
int main()
{
    int n;
    cin >> n;
    vector<int> coin(n);
    for (int i = 0; i < n; i++)
        cin >> coin[i];
    int sum;
    cout << "enter target ";
    cin >> sum;
    vector<vector<int>> DP(n, vector<int>(sum + 1, 0));

    for (int i = 0; i <= sum; i++)
    {
        if (i % coin[0] == 0)
            DP[0][i] = i / coin[0];
        else
            DP[0][i] = INT_MAX;
    }
    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j <= sum; j++)
        {
            int take = INT_MAX;
            if (j >= coin[i])
            {
                take = DP[i][j - coin[i]];
            }
            if (take != INT_MAX)
                take++;
            int noTake =DP[ i- 1][j];

             DP[i][j] = min(take, noTake);
        }

    }
    cout<<DP[n-1][sum];
}