#include <bits/stdc++.h>

using namespace std;

int maxPro(vector<int> &w, vector<int> &p, int idx, int W, vector<vector<int>> &DP)
{
    if (idx == w.size())
    {
        return 0;
    }
    if (DP[idx][W] != -1) return DP[idx][W];
    int take=0;
    if(W>=w[idx])
    {
            take = p[idx] + maxPro(w, p, idx + 1, W - w[idx], DP);
    }
    int noTake=maxPro(w,p,idx+1,W,DP);

    return DP[idx][W]=max(take,noTake);
}
int main()
{

    int n;
    cin >> n;
    vector<int> w(n), p(n);

    for (int i = 0; i < n; i++)
        cin >> w[i];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    int W;
    cin >> W;
    vector<vector<int>> DP(n, vector<int>(W + 1, -1));

    cout << maxPro(w, p, 0, W, DP);
}