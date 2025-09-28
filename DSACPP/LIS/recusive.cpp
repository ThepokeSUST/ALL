#include<bits/stdc++.h>

using namespace std;

int LIS(int idx,int pre,vector<int> &vec){
         
    
    if(idx==vec.size())
        return 0;
    int take=0;

    if(pre==-1 || vec[pre]<vec[idx]){
        take=1+LIS(idx+1,idx,vec);
    }
    take=max(take,LIS(idx+1,pre,vec));
    
    return take;
}

int main(){
      
      
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    cout<<LIS(0,-1,vec);
}