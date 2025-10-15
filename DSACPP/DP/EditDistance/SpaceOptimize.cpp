#include <bits/stdc++.h>

using namespace std;

int solve(string str, string strr, int i, int j)
{

    if (i < 0)
        return j + 1;
    if (j < 0)
        return i + 1;
    if (str[i] == strr[j])
        return solve(str, strr, i - 1, j - 1);

    return 1 + min(solve(str, strr, i - 1, j - 1), min(solve(str, strr, i - 1, j), solve(str, strr, i, j - 1)));
}
int main()
{
    string str, strr;
    cin >> str >> strr;
    cout << solve(str, strr, str.size() - 1, strr.size() - 1);
    int n = str.size();
    int m = strr.size();
    vector<vector<int>> DP(n + 1, vector<int>(m + 1));

    for (int i = 0; i <= m; i++)
        DP[0][i] = i;
    for (int i = 0; i <= n; i++)
        DP[i][0] = i;

    vector<int> pre(m+1,0),cur(m+1,0);
    for(int i=0;i<=m;i++) pre[i]=i;
    for (int i = 1; i <= n; i++)
    {    cur[0]=i;
        for (int j = 1; j <= m; j++)
        {   
            if (str[i-1] == strr[j-1])
               cur[j] = pre[j - 1];
            else
                cur[j] = 1 + min(pre [j - 1], min(pre[ j], cur[j - 1]));
        }
        pre=cur;
    }
    cout<<endl;
    cout<<pre[m];
}