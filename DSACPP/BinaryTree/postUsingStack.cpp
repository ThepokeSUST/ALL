// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
class node{
    public:
       int val;
       node* left;
       node* right;
       
       node(int ele){
            val=ele;
            left=right=NULL;
       }
};

node* create(){
     
     int ele;
     cin>>ele;
     
     if(ele==-1) return NULL;
     
     node* temp=new node(ele);
     temp->left=create();
     temp->right=create();
     
     return temp;
}

vector<int>  preOrder(node* root){
    vector<int> ans;
    if(root==NULL) return ans;
   
    stack<node*> st;
    st.push(root);
   
    while(!st.empty()){
        node* temp=st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->left)
              st.push(temp->left);
        if(temp->right)
              st.push(temp->right);
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main() {
    // Write C++ code here
     node* root=create();
     vector<int> ans=preOrder(root);
     for(auto ele:ans){
         cout<<ele<<" ";
     }
    return 0;
}