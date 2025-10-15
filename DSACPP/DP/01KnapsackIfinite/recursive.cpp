#include<iostream>
#include<vector>

using namespace std;
int solve(vector<int> &vec,vector<int>&pro,int idx,int w){
      
       if(idx==vec.size()-1){
        if(w>=vec[idx]){
            int n=w/vec[idx];
            return pro[idx]*n;
        }
        else return 0;
       }
       int take=0;
       if(w>=vec[idx]){
        take=pro[idx]+solve(vec,pro,idx,w-vec[idx]);
       }
       int noTake=solve(vec,pro,idx+1,w);

       return max(take,noTake);
}
int main(){
    int n;
    cin>>n;

    vector<int> vec(n);
    vector<int> pro(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    for(int i=0;i<n;i++) cin>>pro[i];
    int w;
    cin>>w;

    cout<<solve(vec,pro,0,w);
}