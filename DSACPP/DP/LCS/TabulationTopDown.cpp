#include <iostream>
#include <vector>

using namespace std;
// int rcrs(string str, string strr, int i, int j)
// {

//     if (i < 0 || j < 0)
//         return 0;
//     if (str[i] == strr[j])
//         return 1 + rcrs(str, strr, i - 1, j - 1);
//     else
//     {
//         return max(rcrs(str, strr, i - 1, j), rcrs(str, strr, i, j - 1));
//     }
// }
int main()
{
    string str, strr;
    cin >> str >> strr;
   // cout << rcrs(str, strr, str.size() - 1, strr.size() - 1);

    vector<vector<int>> DP(str.size() + 1, vector<int>(strr.size() + 1, 0));

    for (int i = 1; i <= str.size(); i++)
    {
        for (int j = 1; j <= strr.size(); j++)
        {
            if (str[i-1] == strr[j-1])
                DP[i][j]=1+DP[i - 1][j - 1];
            else
            {
                DP[i][j]= max(DP[ i - 1][j], DP[i][ j - 1]);
            }
        }
    }
   cout<<endl;
    cout<<DP[str.size()][strr.size()];
}