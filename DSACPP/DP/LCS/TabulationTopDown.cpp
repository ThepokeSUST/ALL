#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    vector<vector<int>> DP(str1.size(), vector<int>(str2.size(), -1));

    //   cout<<LCS(str1,str2,str1.size()-1,str2.size()-1,DP);
    for (int i = 0; i < str2.size(); i++)
    {
        if (str1[0] == str2[i])
            DP[0][i] = 1;
        else
        {
            if (i != 0)
                DP[0][i] = DP[0][i - 1];
            else
                DP[0][i] = 0;
        }
    }
    for (int i = 1; i < str1.size(); i++)
    {

        if (str1[i] == str2[0])
            DP[i][0] = 1;
        else
        {
            DP[i][0] = DP[i - 1][0];
        }
    }

    for (int i = 1; i < str1.size(); i++)
    {

        for (int j = 1; j < str2.size(); j++)
        {
            if (str1[i] == str2[j])
            {
                DP[i][j] = 1 + DP[i - 1][j - 1];
            }
            else
            {
                DP[i][j] = max(DP[i][j - 1], DP[i - 1][j]);
            }
        }
    }

    cout << DP[str1.size() - 1][str2.size() - 1];
}