#include<bits\stdc++.h>

using namespace std;

vector<int> KMP(string str){
      
    int n=str.size();
    vector<int> lps(n,0);
    int pre=0;
    int next=1;

    while(next<n){
        if(str[pre]==str[next])
        {
            lps[next]=pre+1;
            next++;
            pre++;
        }
        else{
            if(pre==0)
                next++;
            else
              pre=lps[pre-1];    
        }
    }
    return lps;
}
int main(){
      string str;
      cin>>str;
      string strr=str;
      str.push_back('$');
      
      reverse(str.begin(),str.end());
      strr+=str;
      vector<int> lps=KMP(strr);
      int ans=lps[strr.size()-1];
      //cout<<strr<<endl;
      cout<<str.size()-ans-1;


}