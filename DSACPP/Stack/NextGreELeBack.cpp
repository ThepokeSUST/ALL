#include<iostream>
#include<vector>
#include<stack>

using namespace std;


void solve(vector<int> &vec,vector<int> &ans){
     

    stack<int> st;
    st.push(vec.size()-1);

    for(int i=vec.size()-2;i>=0;i--)
    {
         if(!st.empty()&& vec[st.top()]> vec[i])
            ans[i]= vec[st.top()];
          else {
            while(!st.empty() && vec[i]>vec[st.top()] ){
              st.pop();
            }
            if(!st.empty() && vec[st.top()]>vec[i]){
              ans[i]= vec[st.top()];
            }
          }
          st.push(i);
    }

}

int main(){
     int n;
     cin>>n;
     vector<int> vec(n);
     for(int i=0;i<n;i++){
         cin>>vec[i];
     }
     vector<int> ans(n,-1);

     solve(vec,ans);

     for(int i: ans)
          cout<<i<<" ";
}