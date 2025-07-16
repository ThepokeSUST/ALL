#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> NextLowest(vector<int> &rect){
            
        vector<int> ans(rect.size(),rect.size());
        stack<int> st;
        st.push(0);
        for(int i=1;i<rect.size();i++){
             
            while(!st.empty() && rect[st.top()]> rect[i]){
                ans[st.top()]= rect[i];
                st.pop();
            }
            st.push(i);
            
        }

        return ans;
}

vector<int> PreLowest(vector<int> &rect){

        vector<int> ans(rect.size(),-1);
        stack<int> st;
        st.push(0);

        for(int i=1;i<rect.size();i++){
            if(!st.empty() && rect[st.top()]<rect[i])
              {
                  ans[i]=rect[st.top()];
              }
            else{
                while(!st.empty() && rect[st.top()]> rect[i])
                {
                    st.pop();
                }
                 if(!st.empty() && rect[st.top()]<rect[i])
              {
                  ans[i]=rect[st.top()];
              }

            }  

               st.push(i);
        }

        return ans;
}
int solve(vector<int> &rect){
     int n= rect.size();

     vector<int> nextlow=NextLowest(rect);
     vector<int> prevlow=PreLowest(rect);
}


int main(){
    
    int n;
    cin>>n;
    vector<int> rect(n);
    for(int i=0;i<n;i++) cin>>rect[i];
   // cout<<solve(rect);
   vector<int> a= NextLowest(rect);
   for(int ele: a) cout<<ele<<" ";
   a= PreLowest(rect);
   cout<<endl;     
   for(int ele: a) cout<<ele<<" ";

}