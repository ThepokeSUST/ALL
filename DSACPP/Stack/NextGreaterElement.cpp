#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void solve(vector<int> &vec,vector<int> &ans){
     
    stack<int> st;
    st.push(0);

    for(int i=1;i<vec.size();i++){
        

        while(!st.empty()&& vec[st.top()]<vec[i]){
             if(i==1)
          // cout<<st.top()<<endl;
            ans[st.top()]=vec[i];
            st.pop();
        }
        st.push(i);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);

    for(int i=0;i<n;i++) cin>>vec[i];

    vector<int> ans(n,-1);
    solve(vec,ans);

    for(int i: ans)
       cout<<i<<" ";
}