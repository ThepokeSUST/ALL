#include<iostream>
#include<queue>
#include<vector>
#include <algorithm>
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
    
    if(ele == -1)
       return NULL;
    node* root=new node(ele);
    root->left=create();
    root->right=create();
    return root;   
}

void show(node* rt){
    if(!rt)
      return;
    cout<<rt->val<<"->";
    show(rt->left);
    show(rt->right);  
}

void leftView(node* root,vector<int>&ans,int level){
         
    if(root==NULL) return;

    if(ans.size()==level){
        ans.push_back(root->val);
    }
    leftView(root->left,ans,level+1);
    leftView(root->right,ans,level+1);
}
int main(){
  node* root=create();
  show(root);
  vector<int> ans;
  leftView(root,ans,0);
  cout<<endl;
  for(auto ele: ans){
    cout<<ele<<" ";
  }
  
}

