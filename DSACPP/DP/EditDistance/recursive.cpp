#include<bits/stdc++.h>

using namespace std;

int solve(string str,string strr,int i,int j){
     
    if(i<0) return j+1;
    if(j<0) return i+1;
    if(str[i]==strr[j]) return solve(str,strr,i-1,j-1);

    return 1+min(solve(str,strr,i-1,j-1),min(solve(str,strr,i-1,j),solve(str,strr,i,j-1)));
}
int main(){
      string str,strr;
      cin>>str>>strr;
      cout<<solve(str,strr,str.size()-1,strr.size()-1);
}