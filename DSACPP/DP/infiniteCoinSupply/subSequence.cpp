#include <iostream>
#include<vector>
using namespace std;

void solve(string str,int st,int en,string s,vector<string> &ans){

    if(st==en){
        // cout<<".........."<<s<<endl;
        ans.push_back(s);
        return;
    }

 
     s+=str[st];
     solve(str,st+1,en,s,ans);
     s.pop_back();
     solve(str,st+1,en,s,ans);
}
vector<string> SubSequ(string str){
     vector<string> ans;
     string s="";
     solve(str,0,str.size(),s,ans);
     return ans;
}
int main()
{
    string str;
    cin >> str;

    vector<string> ans=SubSequ(str);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

}
