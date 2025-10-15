#include<iostream>
#include<vector>
#include<climits>


using namespace std;
int cross(vector<int> &vec,int st,int en,int mid){
          
    int left=vec[mid];
    int sum=vec[mid];
    for(int i=mid-1;i>=st;i--){
          sum+=vec[i];
          left=max(left,sum);
    }

    int right=sum=vec[mid+1];
    for(int i=mid+2;i<=en;i++){
        sum+=vec[i];
        right=max(right,sum);
    }

    return left+right;
}
int  solve(vector<int> &vec,int st, int en){
      
    if(st==en) return vec[st];

    int mid=st+(en-st)/2;
    int ls=solve(vec,st,mid);
    int rs=solve(vec,mid+1,en);
    int cs=cross(vec,st,en,mid);
    return max(cs,max(ls,rs));
}

int main(){
      
    int n;
    cin>>n;
    vector<int> vec(n);

    for(int i=0;i<n;i++) cin>>vec[i];

    cout<<solve(vec,0,n-1);
}
//-2,1,-3,4,-1,2,1,-5,4