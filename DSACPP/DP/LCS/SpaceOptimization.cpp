#include<iostream>
#include<vector>

using namespace std;


int main(){

    string str1,str2;
    cin>>str1>>str2;

    vector<int> DP(str2.size());
    vector<int> pre(str2.size());
    DP[0]= str1[0]==str2[0];
    // pre[0]=DP[0];
    for(int i=1;i<str2.size();i++){
        DP[i]= str1[0]==str2[i]?1:DP[i-1];
    }
    pre=DP;

    for(int i=1;i<str1.size();i++){
          
        for(int j=0;j<str2.size();j++){
            if(j==0){
                DP[j]= str1[i]==str2[0]?1:DP[j];
            }
           else{
             if(str1[i]==str2[j])
               DP[j]=1+pre[j-1];
            else
               DP[j]=max(DP[j-1],pre[j]);  
           } 
        }
        pre=DP;
    }

    cout<<DP[str2.size()-1];

}