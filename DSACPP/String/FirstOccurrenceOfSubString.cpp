#include<bits\stdc++.h>


using namespace std;

vector<int> lps(string str){
     int n=str.size();
     vector<int> KMP(n,0);
     int pre=0,next=1;
     while(next<n){
          
        if(str[pre]==str[next]){
            KMP[next]=pre+1;
            pre++;
            next++;
        }
        else{
            if(pre==0)
               next++;
            else{
                pre=KMP[pre-1];
            }   
        }
     }
     return KMP;
}
int main(){
    string str;
    string st;
   cin>>str>>st;
    vector<int> kmp=lps(st);
    int fst=0,snd=0;

    while(fst<str.size()&&snd<st.size()){
        if(str[fst]==st[snd]){
            fst++;
            snd++;
        }
        else{
           if(snd!=0){
            snd=kmp[snd-1];
           }
           else fst++;
        }
    }
    if(snd==st.size()) cout<< fst-snd;
    else cout<< -1;

}