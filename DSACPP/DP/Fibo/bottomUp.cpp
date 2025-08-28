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
    //asume n>1
   DP[0]=0;
   DP[1]=1;
   for(int i=2;i<=n;i++){
    DP[i]=DP[i-1]+DP[i-2];
   }
   cout<<DP[n];
}  