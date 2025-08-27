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
    vector<vector<int>> DP(n + 1, vector<int>(w + 1, 1e9));
    for (int i = 0; i <= coins.size(); i++)
        DP[i][0] = 0;

    for (int i = 1; i <= coins.size(); i++)
    {

        for (int j = 1; j <= w; j++)
        {
            if (coins[i-1] > j)
            {
                DP[i][j] = DP[i - 1][j];
            }
            else
            {  if(DP[i][j-coins[i-1]]!=1e9)
                DP[i][j] = min(DP[i - 1][j], DP[i][j - coins[i - 1]] + 1);
               else
                 DP[i][j]=DP[i-1][j]; 
            }
        }
    }
    // cout<<"end";
    cout << DP[coins.size()][w];
}