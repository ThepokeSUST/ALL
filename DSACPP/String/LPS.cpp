#include<iostream>
#include<vector>

using namespace std;

int main(){
     string str;
     cin>>str;

     vector<int> KMP(str.size(),0);

     int pre=0;
     int next=1;

     while(next<str.size()){
        
        if(str[pre]==str[next])
        {
            KMP[next]=pre+1;
            next++;
            pre++;
        }
        else {
            if(pre!=0)
              pre=KMP[pre-1];
            else{
                KMP[next]=0;
                next++;
            }  
        }    
     }
     cout<<KMP[str.size()-1];
}