#include<bits/stdc++.h>


using namespace std;

int LCS(string str1,string str2,int idx1,int idx2,vector<vector<int>> &DP){
      if(idx1==str1.size() || idx2==str2.size())
         return 0;
       if(DP[idx1][idx2]!=-1) return DP[idx1][idx2];  
       if(str1[idx1]==str2[idx2])
         return DP[idx1][idx2]=1+LCS(str1,str2,idx1+1,idx2+1,DP);
       
         
      return DP[idx1][idx2]= max(LCS(str1,str2,idx1,idx2+1,DP),LCS(str1,str2,idx1+1,idx2,DP));   
}

int main(){
      string str1,str2;
      cin>>str1>>str2;
      vector< vector<int> > DP(str1.size(),vector<int> (str2.size(),-1));
      cout<<LCS(str1,str2,0,0,DP);

}