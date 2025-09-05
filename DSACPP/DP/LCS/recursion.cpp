#include<bits/stdc++.h>


using namespace std;

int LCS(string str1,string str2,int idx1,int idx2){
      if(idx1==str1.size() || idx2==str2.size())
         return 0;
       if(str1[idx1]==str2[idx2])
         return 1+LCS(str1,str2,idx1+1,idx2+1);
       
         
      return max(LCS(str1,str2,idx1,idx2+1),LCS(str1,str2,idx1+1,idx2));   
}

int main(){
      string str1,str2;
      cin>>str1>>str2;
      cout<<LCS(str1,str2,0,0);

}