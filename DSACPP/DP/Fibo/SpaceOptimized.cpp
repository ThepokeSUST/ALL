#include<bits/stdc++.h>

using  namespace std;

int solve(int n){
      if(n==0) return 0;
    int pre1=0;
    int pre2=1;

    for(int i=2;i<=n;i++){
        int cur=pre1+pre2;
        pre1=pre2;
        pre2=cur;
    }
    return pre2;
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
}