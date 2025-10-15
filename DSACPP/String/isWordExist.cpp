#include<iostream>
#include<vector>
using namespace std;

vector<int> kmp(string str){
      int n=str.size();
      
      vector<int> lps(n,0);

      int pre=0;
      int next=1;

      while(next<n){
          
        if(str[next]==str[pre])
        {
            lps[next]=pre+1;
            pre++;
            next++;
        }
        else{
            if(pre==0) next++;
            else pre=lps[pre-1];
        }
      }

      return lps;
}
int main(){
       
    string str;
    cin>>str;
    string sub;
    cin>>sub;

    vector<int> lps=kmp(sub);

    int pre=0;
    int next=0;

    while(next<str.size() && pre<sub.size()){
            if(str[next]==sub[pre]){
                pre++;
            }
            else{
                if(pre!=0)
                  pre=lps[pre-1];
            }
            next++;
    }
    if(pre==sub.size())  cout<<"Found";
    else cout<<"not found";
}