#include<bits/stdc++.h>

using namespace std;

int LIS(int idx,int pre,vector<int> &vec,vector<vector<int> > &DP){
         
    
    if(idx==vec.size())
        return 0;
    int take=0;
    if(DP[idx][pre+1]!=-1)
        return DP[idx][pre+1];
    if(pre==-1 || vec[pre]<vec[idx]){
        take=1+LIS(idx+1,idx,vec,DP);
    }
    take=max(take,LIS(idx+1,pre,vec,DP));
    
    return DP[idx][pre+1]=take;
}

int main(){

    int n;
    cin>>n;
    vector<int> vec(n);
    vector<vector<int> > DP(n,vector<int> (n+1,-1));
    for(int i=0;i<n;i++) 
        cin>>vec[i];
    cout<<LIS(0,-1,vec,DP);
}