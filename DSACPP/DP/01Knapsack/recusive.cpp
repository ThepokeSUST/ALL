#include<bits/stdc++.h>

using  namespace std;

int maxPro(vector<int> &w,vector<int> &p,int idx,int W){
      if(idx==w.size()){
        return 0;
      }
    int take=0;
    if(W>=w[idx])
    {
        take=p[idx]+maxPro(w,p,idx+1,W-w[idx]);
    }
    int noTake=maxPro(w,p,idx+1,W);

    return max(take,noTake);
}
int main(){


    int n;
    cin>>n;
    vector<int> w(n),p(n);

    for(int i=0;i<n;i++) cin>>w[i];
    for(int i=0;i<n;i++) cin>>p[i];

    int W;
    cin>>W;
    cout<<maxPro(w,p,0,W);
}