#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> coins(n);

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    int w;
    cin >> w;
    vector<int> DP(w + 1, 1e9);
    DP[0] = 0;

    for (int i = 0; i < coins.size(); i++)
    {

        for (int j = 1; j <= w; j++)
        {
            if (j >= coins[i])
            {
                DP[j] = min(DP[j - coins[i]]+1, DP[j]);
            }
        }
    }

    cout << DP[w];
}