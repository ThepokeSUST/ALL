#include<bits/stdc++.h>

using namespace std;

int fibo(int  n,vector<int> &DP){
      if(n==0 || n==1)
        return n;
      if(DP[n]!=-1) return DP[n];
    return DP[n]=fibo(n-1,DP)+fibo(n-2,DP);
}
int main(){
    int n;
    cin>>n;
    vector<int> DP(n+1,-1);
  cout<<fibo(n,DP);
}